/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 08:21:24 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/21 10:21:09 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*r;
	size_t	i;

	p = (unsigned char *)dest;
	r = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		p[i] = r[i];
		i++;
	}
	return(dest);
}

int	main(void)
{
	char	A[20] = "Enjanaa";
	char	B[20] = "kankana";
	ft_memcpy(B, A, 4);
	printf("%s\n", B);
	char	A1[20] = "Enjanaa";
	char	B1[20] = "kankana";
	memcpy(B1, A1, 4);
	printf("%s\n", B1);

	int	A2[5] = {1,2,3,4,5};
	int	B2[6];
	ft_memcpy(B2, A2, 5*4);
	printf(" %d %d %d\n", B2[0], B2[1], B2[2]);
	int	A3[5] = {1,2,3,4,5};
	int	B3[6];
	memcpy(B3, A3, 5*4);
	printf(" %d %d %d\n", B3[0], B3[1], B3[2]);
	return(0);
}