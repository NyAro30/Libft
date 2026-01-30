/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 08:21:24 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/29 17:00:18 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*r;
	size_t			i;

	p = (unsigned char *)dest;
	r = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = r[i];
		i++;
	}
	return (dest);
}
