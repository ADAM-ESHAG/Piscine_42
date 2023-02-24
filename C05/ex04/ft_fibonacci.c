/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:40:07 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/21 19:28:16 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
