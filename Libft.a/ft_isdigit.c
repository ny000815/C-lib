/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:56:59 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/23 23:03:34 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	printf("%d$\n", ft_isdigit('a'));
	printf("%d$\n", ft_isdigit('1'));
	printf("%d$\n", ft_isdigit('\0'));
	printf("%d$\n", ft_isdigit('99'));
	printf("%d$\n\n", ft_isdigit('aABf'));
	printf("%d$\n", isdigit('a'));
	printf("%d$\n", isdigit('1'));
	printf("%d$\n", isdigit('\0'));
	printf("%d$\n", isdigit('99'));
	printf("%d$\n", isdigit('aABf'));
	return 0;
}