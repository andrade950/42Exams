/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:43:09 by joaomart          #+#    #+#             */
/*   Updated: 2024/12/17 09:52:04 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		else if (av[2][0] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		else if (av[2][0] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		else if (av[2][0] == '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
		else if (av[2][0] == '%')
			printf("%d", (atoi(av[1]) % atoi(av[3])));
		else
			printf("\n");
	}
	printf("\n");
	return 0;
}
