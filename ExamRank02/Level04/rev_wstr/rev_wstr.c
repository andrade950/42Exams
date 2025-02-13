/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:35:01 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/12 10:56:30 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int i = 0;
	int start = 0;
	int end = 0;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			end = i;
			while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
				i--;
			start = i + 1;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			i--;
			if (i >= 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
