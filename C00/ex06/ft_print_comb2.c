/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:27:02 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/10 11:29:30 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(char c, char d)
{
	c = '10;
	while (c <= '9')
	{
		d = '1';
		while (d <= '9')
		{
			ft_putchar(c);
			ft_putchar(d);
			if (!(c == '9' && d == '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
	
			}
			b++;
		}
		c++;
	}

}

void	ft_print_numbers(char a, char b, char c, char d)
{
	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '8')
		{
			c = '0';
			while (c <= '9')
			{
				d = '1';
				while (d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					if (!(a == '9' && b == '8' && c == '9' && d == '9'))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	z;
	char	y;

	a = '0';
	b = '0';
	z = '0';
	y = '1';
	ft_print_numbers(a, b, z, y);
}
