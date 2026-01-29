/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:14:15 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/27 09:10:25 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			result;
	size_t			i;

	i = 0;
	result = size * nmemb;
	ptr = malloc (result);
	if (!ptr)
		return (NULL);
	while (i < result)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}