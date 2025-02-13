/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:57:22 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/13 09:27:51 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	n_len(int	n)
{
	int i = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int nbr)
{
	int i = 0;
	int len = 0;
	char *array;

	len = n_len(nbr);
	if (nbr < 0)
		i++;
	len += i;
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	array[0] = '-';
	array[len] = '\0';
	while ((len - 1) >= i)
	{
		array[len - 1] = ft_abs(nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (array);
}
