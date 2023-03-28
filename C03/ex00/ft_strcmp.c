/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:28:41 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/27 10:35:50 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] == s2[c] && (s1[c] != '\0' || s2[c] != '\0'))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
/*
int	main(void)
{
	printf("%d", ft_strcmp("Hello", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "world"));
	printf("\n%d", ft_strcmp("World", "Hello"));
	printf("\n%d", ft_strcmp("56789", "01234"));
}*/
