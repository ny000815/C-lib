/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakiyoshiaki <nozakiyoshiaki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:57:02 by ynozaki           #+#    #+#             */
/*   Updated: 2022/04/23 23:01:09 by nozakiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	printf("%d$\n", ft_isalpha('a'));
	printf("%d$\n", ft_isalpha('1'));
	printf("%d$\n", ft_isalpha('\0'));
	printf("%d$\n", ft_isalpha('Z'));
	printf("%d$\n\n", ft_isalpha('aABf'));
	printf("%d$\n", isalpha('a'));
	printf("%d$\n", isalpha('1'));
	printf("%d$\n", isalpha('\0'));
	printf("%d$\n", isalpha('Z'));
	printf("%d$\n", isalpha('aABf'));
	return 0;
}