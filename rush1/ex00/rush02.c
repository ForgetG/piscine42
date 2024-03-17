/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforget <gforget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:23:47 by gforget           #+#    #+#             */
/*   Updated: 2024/03/17 12:35:22 by gforget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_last_line(int x, int y)
{
	int	i;

	i = 0;
	while (i < x && y > 1)
	{
		if (i == 0 || i == x - 1)
		{
			ft_putchar('C');
			i++;
		}
		if (i > 0 && i < x)
		{
			ft_putchar('B');
			i++;
		}
	}
}

void	ft_space(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i < y)
	{
		if (i > 0)
		{
			ft_putchar('B');
			j = 0;
			while (j < x - 2)
			{
				write(1, " ", 1);
				j++;
			}
			if (y >= 1)
				ft_putchar('B');
			if (i != y)
				ft_putchar('\n');
			i++;
		}
		i++;
	}
}

void	ft_first_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
		{
			ft_putchar('A');
			i++;
		}
		else
		{
			ft_putchar('B');
			i++;
		}
	}
	write(1, "\n", 1);
}

void	ft_rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_first_line(x);
		ft_space(x, y);
		ft_last_line(x, y);
	}
}
