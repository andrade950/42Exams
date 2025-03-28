/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:25:05 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/13 09:30:32 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	--i;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		--i;
	}
	return(str);
}
