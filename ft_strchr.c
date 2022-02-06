/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakehi <ktakehi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:27:02 by ktakehi           #+#    #+#             */
/*   Updated: 2021/11/19 02:46:08 by ktakehi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		++str;
	}
	if (!c)
		return ((char *)str);
	return (NULL);
}
// int	main()
// {
// 	char str71[] ="nesugosita!!!";
// 	char str72[] ="nesugosita!!!";
// 	printf("zisaku  : %s\n", ft_strchr(str71, 103));
// 	printf("library : %s\n", strchr(str72, 103));
// 	char str73[] = "hello";
// 	printf("zisaku  : %s\n", ft_strchr(str73, 'h'));
// 	printf("library : %s\n", strchr(str73, 'h'));
// 	printf("zisaku  : %s\n", ft_strchr(str73, 'i'));
// 	printf("library : %s\n", strchr(str73, 'i'));
// 	printf("zisaku  : %s\n", ft_strchr(str73, 'u'));
// 	printf("library : %s\n", strchr(str73, 'u'));
// 	printf("zisaku  : %s\n", ft_strchr(str73, 'e'));
// 	printf("library : %s\n", strchr(str73, 'e'));
// 	printf("zisaku  : %s\n", ft_strchr(str73, 'o'));
// 	printf("library : %s\n", strchr(str73, 'o'));
// 	printf("zisaku  : %s\n", ft_strchr(str73, 0));
// 	printf("library : %s\n", strchr(str73, 0));
// 	printf("zisaku  : %p\n", ft_strchr(str73, 0));
// 	printf("library : %p\n", strchr(str73, 0));
// 	printf("library : %p\n", str73);
// 	printf("zisaku  : %s\n", ft_strchr(str73, 1));
// 	printf("library : %s\n", strchr(str73, 1));
// 	printf("zisaku  : %s\n", ft_strchr(str73, 'z'));
// 	printf("library : %s\n", strchr(str73, 'z'));
// }
// 
// char	*ft_strchr(const char *s, int c)
// {
// 	int	len;
// 
// 	len = ft_strlen(s);
// 	if (*s == 0)
// 	{
// 		if (!c)
// 			return ((char *)s);
// 		return (NULL);
// 	}
// 	if (!c)
// 		return ((char *)(s + len));
// 	while (*s != c && len)
// 	{
// 		s ++;
// 		len --;
// 	}
// 	if (!len)
// 		return (NULL);
// 	return ((char *)s);
// }