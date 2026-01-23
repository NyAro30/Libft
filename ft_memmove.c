/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:05:53 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/22 10:53:43 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*r;
	size_t			i;

	p = (unsigned char *)dest;
	r = (unsigned char *)src;
	i = 0;
	if (p < r || r + n <= p)
	{
		while (i < n)
		{
			p[i] = r[i];
			i++;
		}
	}
	else
		while (n--)
			p[n] = r[n];
	return (dest);
}