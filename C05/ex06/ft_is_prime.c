/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:42:06 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/22 21:26:40 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_atoi.c"

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	while (i <= nb / 2)
	{
		if (!(nb % i))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(31));
	return (0);
}
/*
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	(void) argc;
	(void) argv;
	i = 0;
	j = 1;
	while (argv[j][i] != '\0')
	{
		i++;
	}
	ft_atoi(&argv[j][i]);
	printf("%d\n", ft_is_prime(argv[j][i]));
	return (0);
}*/
