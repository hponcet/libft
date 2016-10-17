/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <hponcet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 19:04:59 by hponcet           #+#    #+#             */
/*   Updated: 2016/10/17 21:23:01 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

char	**ft_hash_addpath(char **htbl, char *path, int nb_case)
{
	DIR				*dirp;
	struct dirent	*s_dir;
	char			*npath;

	if (!(dirp = opendir(path)))
		return (htbl);
	while ((s_dir = readdir(dirp)))
	{
		if (ft_strcmp(s_dir->d_name, "..") == 0 || ft_strcmp(s_dir->d_name, ".")
				== 0)
			continue ;
		npath = ft_joinf("%s/%s" path, s_dir->d_name);
		htbl = ft_hash_add(htbl, s_dir->d_name, npath, nb_case);
		ft_strdel(&npath);
	}
	closedir(dirp);
	return (htbl);
}

int		ft_hash(char *name, int nb_case)
{
	int		i;
	int		tot;

	i = 0;
	tot = 0;
	while (name[i])
	{
		tot += name[i];
		i++;
	}
	return (tot % nb_case);
}

char	**ft_hash_add(char **htbl, const char *name, char *value, int nb_case)
{
	int		index;
	t_hash	*file;
	t_hash	*prev;
	t_hash	*tmp;

	index = ft_hash(name, nb_case);
	file = ft_hash_newfile(name, value);
	tmp = htbl[index];
	prev = NULL;
	if (tmp)
	{
		while (tmp && ft_strcmp(tmp->name, file->name) < 0)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (prev)
			prev->next = file;
		file->next = tmp;
	}
	else
		tmp = file;
	return (htbl);
}

char	*ft_hash_search(char **htbl, char *name, int nb_case)
{
	int		index;
	char	*ret;
	t_hash	*tmp;

	index = ft_hash(name, nb_case);
	tmp = htbl[index];
	ret = NULL;
	if (tmp)
	{
		while (tmp && ft_strcmp(tmp->name, file->name) < 0)
			tmp = tmp->next;
		if (ft_strcmp(tmp->name, name) == 0)
			ret = ft_strdup(tmp->value);
	}
	return (ret);
}
