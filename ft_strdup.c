/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 00:45:36 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/02/10 02:04:02 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	if (!s)
		return (NULL);
	dup = (char *)malloc((ft_strlen(s)+ 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i <= ft_strlen(s))
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
