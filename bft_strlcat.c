/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:24:36 by hponcet           #+#    #+#             */
/*   Updated: 2015/12/08 15:51:58 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		k;
	ch

	j = 0;
	i = ft_strlen(dst);
	k = size - ft_strlen(dst) - 1;
	while (src[j] != '\0' && j < k)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
