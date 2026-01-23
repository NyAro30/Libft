/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:14:44 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/01/24 00:18:11 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int	main(void)
{
	/*char	A[20] = "Hello";
	char	B[20] = "World !";
	printf("%ld\n", ft_strlcat(A, B, 5));
	printf("%s\n", A);
	return (0);*/
	//to lower to upper
	/*printf("%c\n", toupper('a'));
	printf("%c\n", tolower('A'));
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_tolower('A'));*/
	//ft_strchr
	/*char	A[] = "abcde'\0'";
	char	B[] = "abcde";
	memmove(A + 2, A, 4);
	printf ("%s\t", A);
	ft_memmove(B + 2, B, 4);
	printf ("%s\n", B);*/
	//char	A[] = "Hello";
	//printf("%s\n", ft_strchr(A, '\0'));
	//char	B[] = "Hello";
	//printf("%s\n", strchr(B, '\0'));*/

 /*	char str1[] = "Hello world";
   char str2[20] = "Hello world";

   printf("%d\n", strncmp(str1, str2, 10));

    char str3[20] = "Hello world";
   char str4[20] = "Hello world";
	printf("%d\n", ft_strncmp(str3, str4, 10));*/
/*/
	const char str[] = "Hello, World!";
    const char ch = ' ';
    char *result;
    // Search for 'W' in the first 13 bytes of str
    size_t search_len = 13; 

    result = (char*)memchr(str, ch, search_len);

    if (result != NULL) {
        // Calculate the position using pointer arithmetic
        printf("Character '%c' found at position %ld within the first %zu bytes.\n", 
               ch, result - str, search_len);
    } else {
        printf("Character '%c' not found within the first %zu bytes.\n", 
               ch, search_len);
    }

	const char st[] = "Hello, World!";
    const char c = ' ';
    char *res;
    // Search for 'W' in the first 13 bytes of str
    size_t search_l = 13; 

    res = (char*)ft_memchr(st, c, search_l);

    if (res != NULL) {
        // Calculate the position using pointer arithmetic
        printf("Character '%c' found at position %ld within the first %zu bytes.\n", 
               c, res - st, search_l);
    } else {
        printf("Character '%c' not found within the first %zu bytes.\n", 
               c, search_l);
    }
*/

/*	 char arr1[] = {1, 2, 3, 4, 5};
    char arr2[] = {1, 2, 3, 4, 5};
    char arr3[] = {1, 2, 3, 4, 6};
    
    // Compare arr1 and arr2
    int result1 = ft_memcmp(arr1, arr2, sizeof(arr1));

    if (result1 == 0) {
        printf("Comparison 1: Arrays are equal\n");
    } else {
        printf("Comparison 1: Arrays are not equal\n");
    }

    // Compare arr1 and arr3
    // The comparison stops at the fifth byte (index 4) where 5 != 6.
    int result2 = ft_memcmp(arr1, arr3, sizeof(arr1));

    if (result2 == 0) {
        printf("Comparison 2: Arrays are equal\n");
    } else if (result2 < 0) {
        printf("Comparison 2: arr1 is less than arr3\n");
    } else {
        printf("Comparison 2: arr1 is greater than arr3\n");
    }

    return (0);
*/
/*
char	B[] = "-1234ab567";
printf("%s change to int : %d\n", B, atoi(B));

char	A[] = "-1234ab567";
printf("%s change into int : %d\n", A, ft_atoi(A));
return (0);*/

char	*ptr = (char *)ft_calloc(4, sizeof(char));
if (!ptr)
	return (0);
printf("%p\n", (void *)(ptr));
free(ptr);
}