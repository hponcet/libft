/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <hponcet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 19:04:59 by hponcet           #+#    #+#             */
/*   Updated: 2016/10/17 22:42:08 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"
#include <dirent.h>

t_hash	**ft_hash_addpath(t_hash **htbl, char *path, int nb_case)
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
		npath = ft_joinf("%s/%s", path, s_dir->d_name);
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

t_hash	**ft_hash_add(t_hash **htbl, char *name, char *value, int nb_case)
{
	int		index;
	t_hash	*file;
	t_hash	*prev;
	t_hash	*tmp;

	index = ft_hash(name, nb_case);
	file = ft_hash_newfile(name, value);
	tmp = htbl[index];
	if (tmp)
		ft_putendl(tmp->name);
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

char	*ft_hash_search(t_hash **htbl, char *name, int nb_case)
{
	int		index;
	char	*ret;
	t_hash	*tmp;

	index = ft_hash(name, nb_case);
	tmp = (t_hash*)htbl[index];
	ret = NULL;
	if (tmp)
	{
		while (tmp && ft_strcmp(tmp->name, name) < 0)
			tmp = tmp->next;
		if (ft_strcmp(tmp->name, name) == 0)
			ret = ft_strdup(tmp->value);
	}
	return (ret);
}