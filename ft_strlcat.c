/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakehi <ktakehi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:27:17 by ktakehi           #+#    #+#             */
/*   Updated: 2021/11/19 02:27:17 by ktakehi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	total_size;

	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	total_size = size_dst + size_src;
	if (size <= size_dst)
		return (size_src + size);
	while (*src && size - size_dst - 1)
	{
		dst[size_dst] = *src;
		size_dst++;
		src++;
	}
	dst[size_dst] = 0;
	return (total_size);
}

// int	main()
// {
// 	char str151[10] ="12";
// 	char str152[10] ="12";
// 	char str153[] = "ABCDEFG";
// 	printf("zisaku  : %zu, %s\n", ft_strlcat(str151,str153, 6), str151);
// 	printf("library : %zu, %s\n", strlcat(str152,str153, 6), str152);
// 	printf("zisaku  : %zu, %s\n", ft_strlcat(str151,str153, 1), str151);
// 	printf("library : %zu, %s\n", strlcat(str152,str153, 1), str152);
// 	puts("----ft_strdup------");
// 	char str161[] ="radwimps";
// 	printf("zisaku  : %s\n", ft_strdup(str161));
// 	printf("library  : %s\n", strdup(str161));
// 	puts("----bzero------");
// 	char str171[] ="radwimps";
// 	char str172[] ="radwimps";
// 	ft_bzero(str171, 3);
// 	bzero(str172, 3);
// 	printf("zisaku  : %s\n", str171 + 3);
// 	printf("library  : %s\n", str172 + 3);
// 	printf("zisaku  : %s\n", str171 + 2);
// 	printf("library  : %s\n", str172 + 2);
// }
// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;
// 
// 	i = 0;
// 	while (str[i])
// 		i ++;
// 	return (i);
// }