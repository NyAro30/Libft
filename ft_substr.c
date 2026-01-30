/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 02:17:21 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/30 07:54:23 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	temp;
	size_t	sub_len;

	if (!s)
		return (NULL);
	i = 0;
	temp = ft_strlen(s);
	if (start >= temp)
		return (ft_strdup(""));
	sub_len = len;
	if (sub_len > temp - start)
		sub_len = temp - start;
	sub = (char *)malloc((sub_len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (i < sub_len && s[start])
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
