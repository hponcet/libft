/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <hponcet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 21:21:28 by hponcet           #+#    #+#             */
/*   Updated: 2016/10/17 22:44:07 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASH_H
# define FT_HASH_H
# include "libft.h"

typedef struct			s_hash
{
	char				*name;
	char				*value;
	struct s_hash		*next;
}						t_hash;

t_hash					**ft_hash_addpath(t_hash **htbl, char *path, int nb_case);
int						ft_hash(char *name, int nb_case);
t_hash					**ft_hash_add(t_hash **htbl, char *name,
						char *value, int nb_case);
char					*ft_hash_search(t_hash **htbl, char *name, int nb_case);
t_hash					**ft_hash_newtbl(int nb_case);
t_hash					*ft_hash_newfile(char *name, char *value);

#endif