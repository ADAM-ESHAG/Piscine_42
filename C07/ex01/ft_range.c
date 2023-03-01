/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:34:16 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/28 09:01:08 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main()
{
	int	min;
	int	max;
	int	i;

	i = 0;
	min = 3;
	max = 13;
	int	*tab = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
