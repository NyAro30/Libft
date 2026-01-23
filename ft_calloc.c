/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:14:15 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/24 00:26:24 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			res;
	size_t			i;

	i = 0;
	res = size * nmemb;
	ptr = malloc (res);
	if (!ptr)
		return (NULL);
	while (i < res)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
