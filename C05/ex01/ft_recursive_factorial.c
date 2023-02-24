/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:50:39 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/19 16:03:51 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	unsigned int	fact;

	fact = 1;
	while (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
		nb--;
	}
	if (nb < 0)
	{
		fact = 0;
	}
	return (fact);
}
