/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:26:01 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/13 09:28:40 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_hex(int n)
{
	char hex_digits[] = {"0123456789abcdef"};

	if (n > 15)
		ft_putnbr_hex(n / 16);
	ft_putchar(hex_digits[n % 16]);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	int i = 0;
	int nbr = 0;

	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		ft_putnbr_hex(nbr);
	}
	write(1, "\n", 1);
}
