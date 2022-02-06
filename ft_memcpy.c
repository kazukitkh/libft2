/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakehi <ktakehi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:26:26 by ktakehi           #+#    #+#             */
/*   Updated: 2021/11/19 02:26:26 by ktakehi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i++ < n)
		((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
	return (dest);
}

//後ろから文字を入れることによって、本家memcpyと変わることがあった。例えば、コピー元の前半部分が、memcpyによって変更された場合である。
// 元々の函数:
// void	*ft_memcpy(void *dest, void *src, int n)
// {
// 	while (n--)
// 		((char *)dest)[n] = ((char *)src)[n];
// 	return (dest);
// }
// 今回: ./a.out abc world 5
// dorldorld
// 本家:
// worldorld