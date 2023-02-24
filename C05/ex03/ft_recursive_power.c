/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:19:04 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/20 18:19:33 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	while (power > 1)
	{
		return (nb * ft_recursive_power(res, (power - 1)));
	}
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (res);
}
