/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:10:45 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/26 14:26:45 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print(char w, char x, char y, char z)
{
	ft_putchar(w);
	ft_putchar(x);
	ft_putchar(' ');
	ft_putchar(y);
	ft_putchar(z);
	if (!(w == '9' && x == '8' && y == '9' && z == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_first_two(int w, int x, int y, int z)
{
	w = '0';
	while (w <= '9')
	{
		x = '0';
		while (x <= '8')
		{
			y = '0';
			while (y <= '9')
			{
				z = '1';
				while (z <= '9')
				{
					ft_print(w, x, y, z);
					z++;
				}
				y++;
			}
			x++;
		}
		w++;
	}
}

void	ft_print_comb2(void)
{
	int	w;
	int	x;
	int	y;
	int	z;

	ft_print_first_two(w, x, y, z);
	ft_putchar('\n');
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
