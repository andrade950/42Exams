/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:32:30 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/13 09:29:10 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	
	if (begin_list == 0)
		return (0);
	while (begin_list)
	{
		begin_list = begin_list -> next;
		i++;
	}
	return (i);
}
