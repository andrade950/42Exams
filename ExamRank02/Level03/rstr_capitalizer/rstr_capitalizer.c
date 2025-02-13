/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:59:31 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/12 11:17:02 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] ==  '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				write(1, &str[i], 1);
				i++;
			}
			else
			{
				write(1, &str[i], 1);
				i++;
			}
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	int i = 1;

	if (ac > 1)
	{
		while(av[i])
		{
			rstr_capitalizer(av[i]);
			i++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
