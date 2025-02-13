/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:56:30 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/13 09:23:35 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;

	if (!s1 || !s2)
		return 0;
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *) s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}
