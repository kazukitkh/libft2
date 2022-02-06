/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakehi <ktakehi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:26:05 by ktakehi           #+#    #+#             */
/*   Updated: 2021/11/19 02:26:07 by ktakehi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *x, unsigned int number, long int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (x);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*x;
	long int		len;
	unsigned int	number;
	int				sign;

	sign = 1;
	len = ft_len(n);
	x = (char *)malloc(sizeof(char) * (len + 1));
	if (!(x))
		return (NULL);
	x[len--] = '\0';
	if (n == 0)
		x[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		x[0] = '-';
	}
	else
		number = n;
	x = ft_array(x, number, len);
	return (x);
}

// int	ft_atoi(const char *str)
// {
// 	int	nbr;
// 	int	sign;

// 	sign = 0;
// 	nbr = 0;
// 	while (*str == ' ')
// 		str++;
// 	if (!ft_strncmp(str, "-2147483648", 11))
// 		return (-2147483648);
// 	if (*str == '-')
// 	{
// 		str++;
// 		sign++;
// 	}
// 	else if (*str == '+')
// 		str++;
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		nbr *= 10;
// 		nbr += (*str - 48);
// 		str++;
// 	}
// 	if (sign)
// 		nbr *= -1;
// 	return (nbr);
// }
//