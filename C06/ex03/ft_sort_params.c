/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:55:53 by gabrrodr          #+#    #+#             */
/*   Updated: 2023/03/27 14:50:13 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *st1, char *st2)
{
	int	i;

	i = 0;
	while ((st1[i] == st2[i]) && st1[i] != '\0' && st2[i] != '\0')
		i++;
	return (st1[i] - st2[i]);
}

void	sort(int argc, char **argv)
{
	int		i;
	int		sort;
	char	*s;

	sort = 1;
	while (sort)
	{
		sort = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				s = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = s;
				sort = 1;
			}
			i++;
		}
		if (sort == 0)
			break ;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	o;

	i = 1;
	o = 0;
	sort(argc, argv);
	while (argc > i)
	{	
		o = 0;
		while (argv[i][o] != '\0')
		{
			write(1, &argv[i][o], 1);
			o++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
