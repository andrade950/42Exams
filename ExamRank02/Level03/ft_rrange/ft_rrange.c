/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:46:30 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/12 15:57:13 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int len = 0;
	int temp = end;
	int *array;

	if (start == end)
	{
		len = 1;
		array = (int *)malloc(sizeof(int) * (len + 1));
		array[i] = start;
	}
	else if (start < end)
	{
		while (temp >= start)
		{
			len++;
			temp--;
		}
		array = (int *)malloc(sizeof(int) * (len + 1));
		while (i <= len)
		{
			array[i] = end;
			end--;
			i++;
		}
	}
	else if (start > end)
	{
		while (temp <= start)
		{
			len++;
			temp++;
		}
		array = (int *)malloc(sizeof(int) * (len + 1));
		while (i <= len)
		{
			array[i] = end;
			end++;
			i++;
		}
	}
	return (array);
}
