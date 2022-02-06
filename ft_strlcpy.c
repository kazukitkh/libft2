/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakehi <ktakehi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:27:23 by ktakehi           #+#    #+#             */
/*   Updated: 2021/11/19 02:27:23 by ktakehi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	ret_size;
	size_t	i;

	ret_size = ft_strlen(src);
	if (!size)
		return (ret_size);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = 0;
	return (ret_size);
}
/*
	メモリー領域 *src からメモリー領域 *dst に 最大で dstsize - 1 バイトのコピーを行う。
	dstsize - 1バイトコピーする前にNULL文字が見つかると、 そこでコピーを中止する。
	資料：CPC02 - EX
	from notion: Libft, Part1
*/

// int	main()
// {
// 	char	*new_str;
// 	// char str101[] ="123125161";
// 	char str102[] ="12252352";
// 	char str103[] = "hello";
// 	new_str = malloc(sizeof(char) * (20));
// 	printf("zisaku  : %zu, %s\n", ft_strlcpy(new_str,str103, 4), new_str);
// 	printf("library : %zu, %s\n", strlcpy(new_str,str103, 4), new_str);
// 	printf("zisaku  : %zu, %s\n", ft_strlcpy(str102,str103, 3), str102);
// 	printf("library : %zu, %s\n", strlcpy(str102,str103, 3), str102);
// }
