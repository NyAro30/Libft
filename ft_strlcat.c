/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:55:37 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/27 10:00:50 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	lendst_libre;
	size_t	i;

	i = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (lendst >= size)
		return (lensrc + size);
	lendst_libre = size - (lendst - 1);
	while (src[i] != '\0' && i < lendst_libre)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
