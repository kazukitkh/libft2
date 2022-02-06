/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakehi <ktakehi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:26:16 by ktakehi           #+#    #+#             */
/*   Updated: 2021/11/19 02:26:17 by ktakehi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}

// #include "libft.h"

// void	*ft_memchr(const void *ptr, int ch, size_t count)
// {
// 	char *cptr;

// 	cptr = (char *)ptr;
// 	while (cptr[0] != ch && --count)
// 		cptr++;
// 	if (cptr[0] == ch)
// 		return ((void *)cptr);
// 	return (NULL);
// }