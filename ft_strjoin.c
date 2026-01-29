/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 08:42:57 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/26 15:51:31 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*comp;
	int		j;
	int		i;

	i = 0;
	j = 0;
	comp = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!comp)
		return (NULL);
	while (s1[i] != '\0')
	{
		comp[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		comp[i + j] = s2[j];
		j++;
	}
	comp[i + j] = '\0';
	return (comp);
}
