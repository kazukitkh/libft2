/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakehi <ktakehi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:24:31 by ktakehi           #+#    #+#             */
/*   Updated: 2021/11/19 02:29:54 by ktakehi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static unsigned int	ft_get_nb_strs(char const *s, char c)
{
	size_t	i;
	size_t	nb_strs;

	if (!s[0])
		return (0);
	i = 0;
	nb_strs = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb_strs++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb_strs++;
	return (nb_strs);
}

static void	ft_get_next_str(char **next_str, size_t *next_str_len, char c)
{
	size_t	i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_str_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*next_str;
	size_t	n[3];

	if (!s)
		return (NULL);
	n[1] = ft_get_nb_strs(s, c);
	tab = (char **)malloc(sizeof(char *) * (n[1] + 1));
	if (!tab)
		return (NULL);
	n[2] = 0;
	next_str = (char *)s;
	n[0] = 0;
	while (n[2] < n[1])
	{
		ft_get_next_str(&next_str, &n[0], c);
		tab[n[2]] = (char *)malloc(sizeof(char) * (n[0] + 1));
		if (!tab[n[2]])
			return (ft_malloc_error(tab));
		ft_strlcpy(tab[n[2]], next_str, n[0] + 1);
		n[2]++;
	}
	tab[n[2]] = NULL;
	return (tab);
}

// int	func_split(char const *s, char c, char ***strs, int **n)
// {
// 	int	j;

// 	j = (*n)[0];
// 	if (s[j] != c)
// 	{
// 		while (j < (int)ft_strlen(s))
// 		{
// 			if (s[j] == c)
// 				break ;
// 			j++;
// 		}
// 		strs[(*n)[1]] = malloc(sizeof(char) * (j - (*n)[0] + 1));
// 		if (!strs[(*n)[1]])
// 		{
// 			free(strs);
// 			while ((*n)[1]--)
// 				free(strs[(*n)[1]]);
// 			return (0);
// 		}
// 		ft_bzero(strs[(*n)[1]], (size_t)(j - (*n)[0]));
// 		strs[(*n)[1]] = ft_memcpy(strs[(*n)[1]], s + (*n)[0], j - (*n)[0]);
// 		(*n)[1]++;
// 	}
// 	(*n)[0] = j;
// 	return (1);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		*n;
// 	char	**strs;

// 	if (!s)
// 		return (NULL);
// 	strs = malloc(sizeof(char *) * (ft_strlen(s) / 2 + 2));
// 	if (!strs)
// 		return (NULL);
// 	n = malloc(sizeof(int) * 3);
// 	if (!n)
// 		return (NULL);
// 	n[2] = 0;
// 	n[0] = -1;
// 	n[1] = 0;
// 	while (++n[0] < (int)ft_strlen(s))
// 		if (!func_split(s, c, &strs, &n))
// 			return (NULL);
// 	strs[n[1]] = NULL;
// 	return (strs);
// }
