/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:36:13 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/24 00:55:05 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>

void printArray(const int* array, size_t size)
{
    for( size_t i = 0; i < size; ++i ){
        printf( "%d ", array[i] );
    }
    printf( "\n" );
}

int main(void)
{
	int a[] = { 0, 1, 2, 3, 4, 5 };
	int b[] = { 0, 1, 2, 3, 4, 5 };

    printArray( a, sizeof(a) / sizeof(a[0]) );
    memcpy( a, &a[3], sizeof(int) * 3 );
    printArray( a, sizeof(a) / sizeof(a[0]) );
    printArray( b, sizeof(b) / sizeof(b[0]) );
	ft_memcpy( b, &b[3], sizeof(int) * 3 );
    printArray( b, sizeof(b) / sizeof(b[0]) );
}