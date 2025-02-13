/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:25:28 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/11 12:02:05 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char res = 0;

	while (i > 0)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
		i--;
	}
	return (res);
}
