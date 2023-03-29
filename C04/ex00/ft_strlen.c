/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:30:13 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/27 12:34:03 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main (void)
{
	char	str[] = "Thiago";
	char	*p_str;

	p_str = str;

	int	count = ft_strlen(p_str);

	printf("%d\n", count);
}*/
