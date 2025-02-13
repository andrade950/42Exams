/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:16:05 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/12 12:12:14 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					i++;
					j++;
				}
				else
					j++;
			}
			if (av[1][i] == '\0')
				write(1, "1", 1);
			else
			{
				write(1, "0", 1);
				break;
			}
		}
	}
	write(1, "\n", 1);
}
