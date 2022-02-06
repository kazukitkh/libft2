/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakehi <ktakehi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:26:22 by ktakehi           #+#    #+#             */
/*   Updated: 2021/11/19 02:26:23 by ktakehi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	int	i;

	i = -1;
	while (++i < (int)size)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
	}
	return (0);
}

// int	main() {
// 	char	*str1 = "hello";
// 	char	*str2 = "";

// 	printf("%d\n", memcmp(str1, str2, 5));
// 	printf("%d\n", ft_memcmp(str1, str2, 5));

// 	return 0;
// }