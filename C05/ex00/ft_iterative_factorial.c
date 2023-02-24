/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:04:07 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/19 15:49:52 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
int	ft_iterative_factorial(int nb)
{
	unsigned int	fact;

	fact = 1;
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (fact);
}
