/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:41:08 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/12 07:22:50 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_run(int x, char a, char b, char c)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar(a);
		}
		else
		{
			if (i == x - 1)
			{
				ft_putchar(c);
			}
			else
			{
				ft_putchar(b);
			}
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (j < y)
	{
		if (j == 0 || j == y - 1)
		{
			ft_run(x, 'A', 'B', 'C');
		}
		else
		{
			ft_run(x, 'B', ' ', 'B');
		}
		j++;
	}
}
