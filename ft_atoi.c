/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:57:58 by hponcet           #+#    #+#             */
/*   Updated: 2015/12/09 19:16:07 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	size_t		i;
	int			n;
	size_t		sign;
	i = 0;
	n = 0;
	sign = 0;
	printf("TEST");
	while (str[i] != '-' || ft_isdigit(str[i]) != 1 || str[i] != '\0') 
		i++;
	if (str[i] == '-')
		sign = 1;
	while (str[i] != '\0' || str[i] >= '0' || str[i] <= '9')
	{
		n *= 10;
		n += (str[i] - '0');
		i++;
	}
	if (sign > 0)
		n *= -1;

	return (n);
}
