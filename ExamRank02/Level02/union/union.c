/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:26:39 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/13 09:25:28 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	unsigned char array[256] = {0};

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!array[(unsigned char)av[1][i]])
			{
				write(1, &av[1][i], 1);
				array[(unsigned char)av[1][i]] = 1;
				i++;
			}
			else
				i++;
		}
		while (av[2][j])
		{
			if (!array[(unsigned char)av[2][j]])
			{
				write(1, &av[2][j], 1);
				array[(unsigned char)av[2][j]] = 1;
				j++;
			}
			else
				j++;
		}
	}
	write(1, "\n", 1);
}
