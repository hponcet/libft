/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cindex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 18:33:26 by hponcet           #+#    #+#             */
/*   Updated: 2016/11/13 17:22:46 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cindex_rev(char *str, char c)
{
	int		len;

	if (!str)
		return (-1);
	len = ft_strlen(str) - 1;
	while (len > -1 && str[len] != c)
		len--;
	return (len);
}
