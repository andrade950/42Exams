/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:55:16 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/13 09:25:43 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	isprime(int n)
{
	int i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int i = 2;
	int nbr = 0;
	int res = 0;

	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		if (nbr <= 1)
			write(1, "0\n", 2);
		else
		{
			while (i <= nbr)
			{
				if (isprime(i))
					res += i;
				i++;
			}
			ft_putnbr(res);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "0\n", 2);
}
