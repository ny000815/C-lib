/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:56:55 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/24 01:32:07 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	while (len)
	{
		((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
		len--;
	}
	return (dst);
}

#include        <stdio.h>
#include        <string.h>

int main(void)
{
        char str[] = "1234567";
		char str2[] = "1234567";

        printf("移動前：%s\n",str);
        memmove(str+2, str, 3);
        printf("移動後：%s\n",str);
		printf("戻り値：%s\n",(char *)memmove(str+2, str, 4));
		/*戻り値original destじゃないみたい*/

        printf("移動前：%s\n",str2);
        ft_memmove(str2+2, str2, 3);
        printf("移動後：%s\n",str2);
		printf("戻り値：%s\n",(char *)ft_memmove(str2+2, str2, 4));
        return 0;
}