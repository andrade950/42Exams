/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:22:29 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/12 15:57:08 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i = 0;
	int len = 0;
	int temp = start;
	int *array;

	if (start == end)
	{
		len = 1;
		array = (int *)malloc(sizeof(int) * (len + 1));
		array[i] = start;
	}
	else if (start < end)
	{
		while (temp <= end)
		{
			len++;
			temp++;
		}
		array = (int *)malloc(sizeof(int) *(len + 1));
		while (i <= len)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		while (temp >= end)
		{
			len++;
			temp--;
		}
		array = (int *)malloc(sizeof(int) * (len + 1));
		while (i <= len)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	return(array);
}
