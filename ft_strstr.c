/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 17:50:22 by hponcet           #+#    #+#             */
/*   Updated: 2015/12/08 18:10:25 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t		i;
	size_t		j;
	char		*ret;

	ret = (char*)big;
	i = 0;
	j = 0;
	if (little == NULL)
		return (ret);
	while (big[i] != '\0')
	{
		while (little + j + i == big + i + j && little + i + j != '\0' &&
		big + i + j != '\0')
			j++;
		i++;
		j = 0;
	}
	if (little[j] == '\0' && big[i] == '\0')
		return (ret + i);
	else
		return (NULL);
}
