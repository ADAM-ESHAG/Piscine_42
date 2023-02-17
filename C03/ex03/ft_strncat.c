/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moadam-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:20:45 by moadam-e          #+#    #+#             */
/*   Updated: 2023/02/16 14:42:09 by moadam-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	indexsrc;

	index = 0;
	indexsrc = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[indexsrc] != '\0' && indexsrc < nb)
	{
		dest[index + indexsrc] = src[indexsrc];
		indexsrc++;
	}
	dest[index + indexsrc] = '\0';
	return (dest);
}
