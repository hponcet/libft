/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:42:14 by hponcet           #+#    #+#             */
/*   Updated: 2015/12/15 22:30:11 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*s;
	size_t				i;

	if (b != NULL)
	{
		s = (unsigned char*)b;
		i = 0;
		while (i < len)
		{
			s[i] = (unsigned char)c;
			i++;
		}
	}
	return (b);
}
