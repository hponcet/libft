/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 11:31:55 by hponcet           #+#    #+#             */
/*   Updated: 2015/12/08 11:33:25 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strcmp(const char *s1, const char *s2)
{
    unsigned char   *chr1;
    unsigned char   *chr2;
    size_t          i;

    chr1 = (unsigned char*)s1;
    chr2 = (unsigned char*)s2;
    i = 0;
    while (s1 != '\0' || s2 != '\0')
    {
        while (chr1[i] == chr2[i])
            i++;
        if (chr1[i] != chr2[i])
            return (chr1[i] - chr2[i]);
    }
    if (chr1[i] == '\0' && chr2[i] == '\0')
        return (0);
    else
        return (chr1[i] - chr2[i]);
}
