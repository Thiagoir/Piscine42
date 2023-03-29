/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:30:02 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/27 19:47:33 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{	
	int	result;

	if (index == 0 || index == 1)
		return (index);
	if (index < 0)
		return (-1);
	else
		result = ft_fibonacci(index - 1) + ft_fibonacci(index -2);
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_fibonacci(4));
}*/
