/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:30:01 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/11 12:17:14 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
