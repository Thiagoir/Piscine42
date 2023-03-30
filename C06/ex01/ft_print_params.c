/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:01:23 by gabrrodr          #+#    #+#             */
/*   Updated: 2023/03/26 18:43:44 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	ag;

	i = 0;
	ag = 1;
	while (ag < argc)
	{
		i = 0;
		while (argv[ag][i] != '\0')
		{
			write(1, &argv[ag][i], 1);
			i++;
		}
		write(1, "\n", 1);
		ag++;
	}
	return (0);
}
