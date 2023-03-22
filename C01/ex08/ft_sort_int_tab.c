/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:33:47 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/15 18:46:26 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[6] = {7, 6, 3, 4, 2, 5};
	int	size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, ", tab[0], tab[1], tab[2]);
	printf("%d, %d, %d", tab[3], tab[4], tab[5]);
	return (0);
}*/	
