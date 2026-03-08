/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:18:27 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/02/08 18:18:17 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	ends1;
	char	*res;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	ends1 = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ends1 > i && ft_strchr(set, s1[ends1 - 1]))
		ends1--;
	res = ft_substr(s1, i, ends1 - i);
	return (res);
}
