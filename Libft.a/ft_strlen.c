/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:17:34 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/23 23:43:04 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
#include <stdio.h>
#include <string.h>
int main (void)
{
	printf("%zd\n", ft_strlen("abc"));
	printf("%zd\n", strlen("abc"));
}