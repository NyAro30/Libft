/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:18:27 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/28 07:31:53 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	ends1;

	i = 0;
	ends1 = ft_strlen(s1);
	while ((!s1[i]) && ft_strchr(set, s1[i]))
		i++;
	while (ends1 > i && ft_strchr(set, s1[ends1 - 1]))
		ends1--;
	return (ft_substr(s1, i, ends1 - i));
}
