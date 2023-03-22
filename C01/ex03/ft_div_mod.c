/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <thiagoir2@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:13:33 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/15 18:08:20 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{	
	int	a;
	int	b;
	int	x;
	int	y;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &x, &y);
	printf("%d \n", x);
	printf("%d", y);
}*/
