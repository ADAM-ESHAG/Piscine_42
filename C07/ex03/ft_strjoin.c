/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:13:35 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/28 15:49:37 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	full_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		new_len;
	int		i;
	char	*dest;

	if (size == 0)
	{
		dest = malloc(sizeof(char));
		return (dest);
	}
	new_len = full_len(size, strs, sep);
	dest = malloc(sizeof(char) * new_len);
	ft_strcpy(dest, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(dest, sep);
		ft_strcat(dest, strs[i]);
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	**strs;
	char	*sep;
	char	*resultat;
	int	size;

	size = 3;
	strs = (char **)malloc(1 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 6);
	strs[1] = (char *)malloc(sizeof(char) * 6);
	strs[2] = (char *)malloc(sizeof(char) * 6);
	strs[0] = "Hello";
	strs[1] = "world";
	strs[2] = "world";
	sep = " ";
	resultat = ft_strjoin(size, strs, sep);
	printf("%s", resultat);
	free(resultat);
	return (0);
}*/
