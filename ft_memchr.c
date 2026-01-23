/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 07:40:01 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/23 08:27:09 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;

	t = (unsigned char *)s;
	while (n > 0)
	{
		if (*t == c)
			return ((void *)t);
		t++;
		n--;
	}
	return (NULL);
}