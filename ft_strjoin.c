/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 08:42:57 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/02/10 02:02:22 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*comp;
	int		i;
	int		j;

	if (!s1 || !s2)
	{
		if (!s1 && !s2)
			return (NULL);
		if (!s1)
			return (ft_strdup(s2));
		return (ft_strdup(s1));
	}
	comp = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!comp)
		return (NULL);
	i = -1;
	while (s1[++i])
		comp[i] = s1[i];
	j = 0;
	while (s2[j])
		comp[i++] = s2[j++];
	comp[i] = '\0';
	return (comp);
}
