/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:57:08 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/24 00:56:47 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

#include        <stdio.h>
#include        <string.h>

int main(void)
{
        char str[] = "0123456789";
        char str2[] = "0123456789";
        char str3[] = "9807654321";
        char str4[] = "9807654321";

        printf("%s\n",str);
        bzero(str+2, 5);
        printf("%s\n",str);

        printf("%s\n",str2);
        ft_bzero(str2+2, 5);
        printf("%s\n",str2);

        printf("%s\n",str3);
        bzero(str3+2, 5);
        printf("%s\n",str3);

        printf("%s\n",str4);
        ft_bzero(str4+2, 5);
        printf("%s\n",str4);
        return 0;
}