/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:57:01 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/23 23:07:29 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	printf("%d$\n", ft_isascii('a'));
	printf("%d$\n", ft_isascii('1'));
	printf("%d$\n", ft_isascii('\0'));
	printf("%d$\n", ft_isascii('99'));
	printf("%d$\n\n", ft_isascii('aABf'));
	printf("%d$\n", isascii('a'));
	printf("%d$\n", isascii('1'));
	printf("%d$\n", isascii('\0'));
	printf("%d$\n", isascii('99'));
	printf("%d$\n", isascii('aABf'));
	return 0;
}