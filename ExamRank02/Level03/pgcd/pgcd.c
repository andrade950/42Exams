/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:15:44 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/12 16:06:14 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int i = 1;
	int n1 = 0;
	int n2 = 0;
	int res = 0;

	if (ac == 3)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[2]);

		while (i < n1 || i < n2)
		{
			if (n1 % i == 0 && n2 % i == 0)
				res = i;
			i++;
		}
		printf("%d", res);
	}
	printf("\n");
}
