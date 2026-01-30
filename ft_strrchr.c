/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:00:21 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/30 01:00:20 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		v;

	i = 0;
	v = -1;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			v = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	else if (v < 0)
		return (NULL);
	else
		return ((char *)&s[v]);
}
