/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakehi <ktakehi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:27:05 by ktakehi           #+#    #+#             */
/*   Updated: 2021/11/19 02:27:05 by ktakehi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	size_t	s_size;
	size_t	i;

	s_size = ft_strlen(s);
	s_dup = malloc(sizeof(char) * (s_size + 1));
	if (!s_dup)
		return (NULL);
	s_dup[s_size] = 0;
	i = 0;
	while (i++ < s_size)
		s_dup[i - 1] = s[i - 1];
	return (s_dup);
}
