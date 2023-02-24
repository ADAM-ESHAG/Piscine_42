/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:19:20 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/21 15:58:11 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	j;
	int	num;

	num = argc;
	j = 0;
	while (argv[0][j] != '\0')
	{
		ft_putchar(argv[0][j]);
		j++;
	}
	ft_putchar('\n');
	return (0);
}
