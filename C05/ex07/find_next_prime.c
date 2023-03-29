/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_next_prime.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:24:25 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/29 11:51:03 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(7853));
	printf("%d\n", ft_find_next_prime(78989));
	printf("%d\n", ft_find_next_prime(2147483643));
	printf("%d\n", ft_find_next_prime(2142103645));
	printf("%d\n", ft_find_next_prime(2142103646));
	printf("%d\n", ft_find_next_prime(2147483647));
}*/
