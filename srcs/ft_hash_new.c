/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <hponcet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 21:20:22 by hponcet           #+#    #+#             */
/*   Updated: 2016/10/17 22:15:41 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

char	**ft_hash_newtbl(int nb_case)
{
	char	**htbl;
	int		i;

	i = nb_case;
	if (!(htbl = (char**)malloc(sizeof(t_hash*) * nb_case + 1)))
		return (NULL);
	while (i >= 0)
		htbl[i--] = NULL;
	return (htbl);
}

t_hash	*ft_hash_newfile(char *name, char *value)
{
	t_hash	*file;

	file = (t_hash*)malloc(sizeof(t_hash));
	file->name = ft_strdup(name);
	file->value = ft_strdup(value);
	file->next = NULL;
	return (file);
}
