/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:56:48 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/24 01:16:21 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (i);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello there, Venus";
    char dst[19];
    char src2[] = "Hello there, Venus";
    char dst2[19];
	char src0[0];
	char dst0[0];

	printf("元々：%s\n", src);
	strlcpy(dst, src, 3);
	printf("本家1：%s\n", dst);
	strlcpy(dst, src, 5);
	printf("本家2：%s\n", dst);
	strlcpy(dst, src, 0);
	printf("本家3：%s\n", dst);
	strlcpy(dst0, src, 0);
	printf("本家4：%s\n", dst);
	strlcpy(dst, src0, 0);
	printf("本家5：%s\n", dst);

	ft_strlcpy(dst2, src2, 3);
	printf("俺の1：%s\n", dst2);
	ft_strlcpy(dst2, src2, 5);
	printf("俺の2：%s\n", dst2);
	ft_strlcpy(dst2, src2, 0);
	printf("俺の3：%s\n", dst2);
	ft_strlcpy(dst0, src, 0);
	printf("俺の4：%s\n", dst);
	ft_strlcpy(dst, src0, 0);
	printf("俺の5：%s\n", dst);

    return (0);
}
