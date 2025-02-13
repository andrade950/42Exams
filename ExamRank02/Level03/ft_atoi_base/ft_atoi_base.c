/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:06:04 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/13 09:29:17 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'F')
		return (c + 32);
	return (c);
}

int	get_digit(char c, int digits_in_base)
{
	int max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base - 1 + '0';
	else
		max_digit = digits_in_base - 11 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return	(c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (c + 10 - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char	*str, int str_base)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	int digit;

	if (str == NULL || str_base < 2 || str_base > 16)
		return (0);

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i])
	{
		digit = get_digit(to_lower(str[i]), str_base);
		if (digit == -1)
			break;
		res = res * str_base + digit;
		i++;
	}
	return (res * sign);
}
