/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:00:10 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/13 09:29:52 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int res = 0;

	res = tab[i];
	
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}
