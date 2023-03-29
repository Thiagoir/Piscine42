/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:05:37 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/27 18:27:07 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power --;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i", ft_iterative_power(3, 4));
}*/
