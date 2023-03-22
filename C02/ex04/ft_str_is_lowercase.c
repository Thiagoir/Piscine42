/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <tinacio-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:22:15 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/15 16:22:19 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a') || (str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}
/*
int	main(void)
{
	char	lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char	*p_lwr;
	p_lwr = lowercase;

	char	special[] = "abcdefghijklmnopqrstuvwxyz_";
	char	*p_spe;
	p_spe = special;

	char	empty[] = "";
	char	*p_emp;
	p_emp = empty;

	printf("1 = String contem apenas char minusculos\n");
	printf("0 = String nao contem apenas char minusculos\n");
	printf("%s = %d\n", lowercase, ft_str_is_lowercase(p_lwr));
	printf("%s = %d\n", special, ft_str_is_lowercase(p_spe));
	printf("Empty = %d\n", ft_str_is_lowercase(p_emp));

	return (0);
}*/
