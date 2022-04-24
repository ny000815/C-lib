/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:56:53 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/24 00:07:59 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)buf)[i] = ch;
		i++;
	}
	return (buf);
}

#include        <stdio.h>
#include        <string.h>

int main(void)
{
        char str[] = "0123456789";
        char str2[] = "0123456789";

        printf("%s\n",str);
        memset(str+2, '*', 5);
        printf("%s\n",str);
        printf("%s\n", (char *)memset(str+2, '*', 5));//なんで01消える？？？？

        printf("%s\n",str2);
        ft_memset(str2+2, '*', 5);
        printf("%s\n",str2);
        printf("%s\n", (char *)ft_memset(str2+2, '*', 5));

        return 0;
}
