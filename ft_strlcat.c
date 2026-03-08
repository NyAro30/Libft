/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:55:37 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/02/10 01:12:22 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;

	lensrc = ft_strlen(src);
	lendst = 0;
	while (dst[lendst] && lendst < size)
		lendst++;
	if (lendst >= size)
		return (lensrc + size);
	i = 0;
	while (src[i] != '\0' && (lendst + i) < size - 1)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
