/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:03:15 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/13 09:21:06 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char temp;

	while (str[i])
		i++;
	--i;
	while (j < i)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	return (str);
}
