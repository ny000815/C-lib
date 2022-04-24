/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:56:45 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/23 22:53:39 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>
// size_t	strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;

// 	i = 0;
	
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello there, Venus";/*18*/
    char dst[19];
    char src2[] = "Hello there, Venus";
    char dst2[19];

	printf("元々：%s\n", src);
	strlcat(dst, src, 3);
	printf("本家：%s\n", dst);
	strlcat(dst, src, 18);
	printf("本家：%s\n", dst);
	strlcat(dst, src, 19);
	printf("本家：%s\n", dst);
	printf("%lu\n", strlcat(dst, src, 19));
	// ft_strlcat(dst2, src2, 3);
	// printf("mine：%s\n", dst2);
	// ft_strlcat(dst2, src2, 5);
	// printf("mine：%s\n", dst2);
	// ft_strlcat(dst2, src2, 0);
	// printf("mine：%s\n", dst2);

    return (0);
}