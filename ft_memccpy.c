/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:50:19 by hponcet           #+#    #+#             */
/*   Updated: 2015/11/30 18:27:18 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	chr;
	size_t			i;
	unsigned char	*d;
	void			*ret;

	s = (unsigned char*)src;
	chr = (unsigned char)c;
	d = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		if (chr == s[i])
		{
			i++;
			ret = dst + i;
			return (ret);
		}
		d[i] = s[i];
		i++;
	}
	return (0);
}
