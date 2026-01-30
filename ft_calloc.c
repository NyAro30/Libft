/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:14:15 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/30 00:53:25 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*ptr;
	size_t			result;
	size_t			i;

	i = 0;
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	result = size * nmemb;
	ptr = (char *)malloc(result);
	if (!ptr)
		return (NULL);
	while (i < result)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
