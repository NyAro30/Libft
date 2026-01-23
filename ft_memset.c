/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 07:54:55 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/22 10:54:06 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*t;
	size_t			i;

	t = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		t[i] = (unsigned char)c;
		i++;
	}
	return (s);
}