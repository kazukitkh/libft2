/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakehi <ktakehi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:25:27 by ktakehi           #+#    #+#             */
/*   Updated: 2021/11/19 02:25:28 by ktakehi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*buff;

	if (!num || !size)
		return (malloc(0));
	buff = malloc(num * size);
	if (!buff)
		return (NULL);
	ft_memset((void *)buff, 0, num * size);
	return ((void *)buff);
}
