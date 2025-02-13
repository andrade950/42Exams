/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:43:46 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/03 14:55:55 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_LIST_H
# define SORT_LiST_H

typedef struct s_list t_list;

struct s_list
{
	int	data;
	t_list	*next;
};

#endif
