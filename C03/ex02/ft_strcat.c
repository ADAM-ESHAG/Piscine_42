/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:33:47 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/16 16:29:22 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	indexsrc;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	indexsrc = 0;
	while (src[indexsrc] != '\0')
	{
		dest[index] = src[indexsrc];
		index++;
		indexsrc++;
	}
	dest[index] = '\0';
	return (dest);
}
