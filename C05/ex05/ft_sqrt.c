/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:20:44 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/21 19:41:18 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 1)
	{
		return (0);
	}
	while (i * i < nb && i < 46341)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}
