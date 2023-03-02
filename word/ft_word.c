/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:06:56 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/24 13:07:30 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_word(char *word)
{
	int	i;

	i = 0;
	while (word[i] != 32)
	{
		ft_putchar(word[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int ag, char **av)
{
	ft_word(av[1]);
	return (0);
}
