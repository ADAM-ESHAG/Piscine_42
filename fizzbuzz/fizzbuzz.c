/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:15:15 by moadam-e          #+#    #+#             */
/*   Updated: 2023/03/01 12:41:43 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_write(int nb)
{
	if (nb > 9)
	{
		ft_write(nb / 10);
	}
	write(1, &"0123456789"[nb % 10], 1);
}

int	main(void)
{
	int	i;
	int	fizz;
	int	buzz;

	i = 1;
	while (i > 0 && i <= 100)
	{
		fizz = i % 3;
		buzz = i % 5;
		if (fizz == 0 && buzz == 0)
		{
			write(1, "FizzBuzz\n", 9);
		}
		else if (fizz == 0)
		{
			write(1, "Fizz\n", 5);
		}
		else if (buzz == 0)
		{
			write(1, "Buzz\n", 5);
		}
		else
		{
			ft_write(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
