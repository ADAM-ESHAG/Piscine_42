/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:44:21 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/19 11:39:03 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
/*
int	main(void)
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
	printf("\n");
	printf("%d", ft_atoi("-999"));
	return (0);
}*/
