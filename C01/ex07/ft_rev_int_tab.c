/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <thiagoir2@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:37:09 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/15 18:07:12 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[6]= {0, 1, 2, 3, 4, 5};
	int	size;

	size = 6;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, ", tab[0], tab[1], tab[2]);
	printf("%d, %d, %d", tab[3], tab[4], tab[5]);
	return (0);
}*/
