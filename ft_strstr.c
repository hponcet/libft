/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 17:50:22 by hponcet           #+#    #+#             */
/*   Updated: 2015/12/09 16:24:36 by hponcet          ###   ########.fr       */
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
		while (little[j] == big[i + j])
			j++;
		if (little[j] == '\0' && big[i + j] == '\0')
			return (ret + i);
		i++;
		j = 0;
	}
	if (little[j] == '\0' && big[i + j] == '\0')
		return (ret + i);
	else
		return (NULL);
}
