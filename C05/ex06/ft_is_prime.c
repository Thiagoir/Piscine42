/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:03:10 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/28 11:22:02 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n expected 0\n", ft_is_prime(-1));
	printf("%d\n expected 0\n", ft_is_prime(0));
	printf("%d\n expected 0\n", ft_is_prime(1));
	printf("%d\n expected 1\n", ft_is_prime(2));
	printf("%d\n expected 1\n", ft_is_prime(3));
	printf("%d\n expected 0\n", ft_is_prime(4));
	printf("%d\n expected 0\n", ft_is_prime(6));
	printf("%d\n expected 1\n", ft_is_prime(7));
	printf("%d\n expected 0\n", ft_is_prime(9));
	printf("%d\n expected 1\n", ft_is_prime(13));
	printf("%d\n expected 0\n", ft_is_prime(15));
	printf("%d\n expected 0\n", ft_is_prime(22));
	printf("%d\n expected 1\n", ft_is_prime(23));
	printf("%d\n expected 1\n", ft_is_prime(1000000007));
}*/
