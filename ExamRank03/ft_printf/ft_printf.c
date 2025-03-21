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
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>

int	print_str(char *str)
{
	int	x;

	if (!str)
		return(write(1, "(null)", 6));
	x = 0;
	while (str[x])
		x++;
	return(write(1, str, x));
}

int	print_nbr(int nbr)
{
	char	c;
	int		counter;

	counter = 0;
	if(nbr == INT_MIN)
	{
		counter += write(1, "-2147483648", 11);
		return(counter);
	}
	if(nbr < 0)
	{
		nbr *= -1;
		counter += write(1, "-", 1);
	}
	if(nbr > 9)
	{
		counter += print_nbr(nbr / 10);
		c = nbr % 10 + 48;
		counter += write(1, &c, 1);
	}
	else
	{
		c = nbr + 48;
		counter += write(1, &c, 1);
	}
	return(counter);
}

int	print_xnbr(unsigned int xnbr)
{
	char	base[16] = "0123456789abcdef";
	int		counter;

	counter = 0;
	if (xnbr / 16  > 0)
		counter += print_xnbr(xnbr / 16);
	counter += write(1, &base[xnbr % 16], 1);
	return (counter);
}

int	ft_printf(const char *z, ... )
{
	int		counter;
	va_list	ap;

	counter = 0;
	va_start(ap, z);
	while(*z)
	{
		if(*z == '%')
		{
			z++;
			if(*z == 's')
				counter += print_str(va_arg(ap, char *));
			else if(*z == 'd')
				counter+= print_nbr(va_arg(ap, int));
			else if(*z == 'x')
				counter += print_xnbr(va_arg(ap, unsigned int));
			z++;
		}
		else
		{
			counter += write(1, z, 1);
			z++;
		}
	}
	return (counter);
}

/*
int	main()
{
	int	x1;
	int	x2;
	char	s[4] = "ola";
	x1 = 42;
	x2 = 42;
	ft_printf("BOAS!! e agora,\n %s , %d , %x, \n", s, x1, x2);
}*/
