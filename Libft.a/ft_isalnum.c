/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:57:04 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/23 23:05:41 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d$\n", ft_isalnum('a'));
	printf("%d$\n", ft_isalnum('1'));
	printf("%d$\n", ft_isalnum('\0'));
	printf("%d$\n", ft_isalnum('99'));
	printf("%d$\n\n", ft_isalnum('aABf'));
	printf("%d$\n", isalnum('a'));
	printf("%d$\n", isalnum('1'));
	printf("%d$\n", isalnum('\0'));
	printf("%d$\n", isalnum('99'));
	printf("%d$\n", isalnum('aABf'));
	return 0;
}