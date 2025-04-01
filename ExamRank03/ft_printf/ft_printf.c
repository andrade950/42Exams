/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:14:48 by joaomart          #+#    #+#             */
/*   Updated: 2025/03/21 11:39:53 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

int	print_str(char *str)
{
	int	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
		i++;
	return (write(1, str, i));
}

int	print_nbr(int nbr)
{
	char	c;
	int		counter;

	counter = 0;
	if (nbr == INT_MIN)
	{
		counter += write(1, "-2147483648", 11);
		return (counter);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		counter += write(1, "-", 1);
	}
	if (nbr > 9)
	{
		counter += print_nbr(nbr / 10);
		c = (nbr % 10) + 48;
		counter += write(1, &c, 1);
	}
	else
	{
		c = nbr + 48;
		counter += write(1, &c, 1);
	}
	return (counter);
}

int	print_xnbr(unsigned int xnbr)
{
	char	base[16] = "0123456789abcdef";
	int		counter;

	counter = 0;
	if (xnbr / 16 > 0)
		counter += print_xnbr(xnbr / 16);
	counter += write(1, &base[xnbr % 16], 1);
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		counter;

	va_start(ap, str);
	counter = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 's')
				counter += print_str(va_arg(ap, char *));
			else if (*str == 'd')
				counter += print_nbr(va_arg(ap, int));
			else if (*str == 'x')
				counter += print_xnbr(va_arg(ap, unsigned int));
			str++;
		}
		else
		{
			counter += write(1, str, 1);
			str++;
		}
	}
	return (counter);
}

/* int	main()
{
	int		n1;
	int		n2;
	char	s[4] = "ola";
	n1 = 42;
	n2 = -42;
	ft_printf("BOAS!! e agora,\n %s , %d , %x, \n", s, n1, n2);
} */
