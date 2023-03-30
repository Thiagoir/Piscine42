/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:15:24 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/28 12:30:55 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		result = result * nb;
		nb --;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_factorial(3));
	printf("%i\n", ft_iterative_factorial(5));
	printf("%i\n", ft_iterative_factorial(0));
}*/
