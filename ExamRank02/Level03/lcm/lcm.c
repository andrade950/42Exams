/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:55:34 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/12 09:19:10 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int mult = 0;
	int res = 0;

	mult = a * b;
	if (mult == 0)
		return (0);
	while (mult >= a || mult >= b)
	{
		if (mult % a == 0 && mult % b == 0)
			res = mult;
		mult--;
	}
	return (res);
}
