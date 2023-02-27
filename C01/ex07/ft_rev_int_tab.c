/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:54:26 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/26 17:33:44 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	j;

	j = 0;
	size--;
	while (j < size)
	{
		swap = tab[j];
		tab[j] = tab[size];
		tab[size] = swap;
		j++;
		size--;
	}
}

int	main(void)
{
	int	size;
	int	tab[5] = {1, 2, 3, 4, 5};

	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
