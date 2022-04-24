/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:56:58 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/23 23:09:58 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	printf("%d$\n", ft_isprint('a'));
	printf("%d$\n", ft_isprint(' '));
	printf("%d$\n", ft_isprint('\0'));
	printf("%d$\n", ft_isprint('~'));
	printf("%d$\n\n", ft_isprint('aABf'));

	printf("%d$\n", isprint('a'));
	printf("%d$\n", isprint(' '));
	printf("%d$\n", isprint('\0'));
	printf("%d$\n", isprint('~'));
	printf("%d$\n", isprint('aABf'));
	return 0;
}