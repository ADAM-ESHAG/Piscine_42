/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:29:10 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/26 23:01:07 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_maj(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_maj(str);
	if (str[0] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	i = 1;
	while ((str[i] != '\0') && (str[i] >= 32 && str[i] <= 122))
	{
		if ((str[i] == 32 || str[i] == '-' || str[i] == '+')
			&& (str[i + 1] != '?'))
		{
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	dest[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(dest));
	return (0);
}*/
