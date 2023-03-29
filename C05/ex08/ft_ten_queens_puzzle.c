/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinacio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:28:23 by tinacio-          #+#    #+#             */
/*   Updated: 2023/03/28 17:52:49 by tinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	thi_zero_buffer(char *buff, unsigned int s)
{
	unsigned int	i;

	i = -1;
	while (++i < s)
	buff[i] = 0;
}

void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		c = n % 10 + '0';
		write(1, &c, 1);
	}
}
/*
** Checks if a position attends the condition that
** a queen can't reach another in only one move
*/

int	thi_validate_until(char *pos, int max_pos)
{
	char	buff[19];
	int		i;

	thi_zero_buffer(buff, 19);
	i = -1;
	while (++i < max_pos + 1)
		if (buff[pos[i] - '0']++)
			return (0);
	thi_zero_buffer(buff, 19);
	i = -1;
	while (++i < max_pos + 1)
		if (buff[(pos[i] - '0') - i + 9]++)
			return (0);
	thi_zero_buffer(buff, 19);
	i = -1;
	while (++i < max_pos + 1)
		if (buff[(pos[i] - '0') + i]++)
			return (0);
	return (1);
}

int	thi_ten_queens_puzzle(int from, char fpos, char lpos, char *buffer)
{
	int	count;

	count = 0;
	buffer[from] = fpos;
	while (buffer[from] <= lpos)
	{
		if (from < 9 && (thi_validate_until(buffer, from)))
		{
		count += thi_ten_queens_puzzle(from + 1, '0', buffer[from] - 2, buffer);
		count += thi_ten_queens_puzzle(from + 1, buffer[from] + 2, '9', buffer);
		}
		else if (from == 9 && thi_validate_until(buffer, 9))
		{
		++count;
			write(1, buffer, 11);
		}
	++buffer[from];
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	char	ten_queens_buffer[11];

	ten_queens_buffer[10] = '\n';
	return (thi_ten_queens_puzzle(0, '0', '9', ten_queens_buffer));
}
/*
int	main(void)
{
	int	count;

	count = ft_ten_queens_puzzle();
	write(1, "Total solutions found: ", 22);
	ft_putnbr(count);
	write(1, "\n", 1);
	return (0);
}*/
