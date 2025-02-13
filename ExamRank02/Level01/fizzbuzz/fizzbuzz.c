/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:28:45 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/12 16:36:34 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			write(1, "fizzbuzz\n", 9);
			i++;
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz\n", 5);
			i++;
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz\n", 5);
			i++;
		}
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
			i++;
		}
	}
}
