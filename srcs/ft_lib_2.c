/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <hponcet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 06:16:53 by hponcet           #+#    #+#             */
/*   Updated: 2016/03/20 20:58:29 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putendl(char const *s)
{
	int		retline;

	retline = '\n';
	write(1, s, ft_strlen(s));
	write(1, &retline, 1);
}

char		*ft_strdup(const char *s1)
{
	char	*buf;
	int		i;

	i = 0;
	buf = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!buf)
		return (NULL);
	while (s1[i] != '\0')
	{
		buf[i] = s1[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*buf;

	i = -1;
	j = -1;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	buf = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (buf == NULL)
		return (NULL);
	while (s1[++i] != '\0' && s1 != NULL)
		buf[++j] = s1[i];
	i = -1;
	while (s2[++i] != '\0' && s2 != NULL)
		buf[++j] = s2[i];
	return (buf);
}

size_t		ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char		*ft_strnew(size_t size)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str)
		while (i < (size + 1))
		{
			str[i] = '\0';
			i++;
		}
	return (str);
}
