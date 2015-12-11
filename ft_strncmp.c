/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 21:52:29 by hponcet           #+#    #+#             */
/*   Updated: 2015/12/09 22:13:31 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t		i;
	int			ret;
    i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n)
	{
		if ((s1[i] == '\0' && s2[i] == '\0') || (i == n - 1 && s1[i] == s2[i]))
			return (0);
		i++;
	}
	ret = (int)s1[i] - (int)s2[i];
	return (ret);
}
