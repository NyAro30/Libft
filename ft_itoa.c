/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 01:35:37 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/30 04:28:15 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(long n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size = 1;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static void	fill_str(char *str, long n, int index)
{
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	while (n > 0)
	{
		str[--index] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;
	int		sign;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		nb = -(long)n;
	}
	else
		nb = n;
	len = get_size(nb);
	str = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	str[len + sign] = '\0';
	fill_str(str, nb, len + sign);
	return (str);
}
