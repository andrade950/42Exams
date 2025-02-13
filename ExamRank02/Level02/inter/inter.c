/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:59:21 by joaomart          #+#    #+#             */
/*   Updated: 2025/02/12 18:07:53 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    unsigned char array[256] = {0};

    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (!array[(unsigned char)av[1][i]])
                    {
                        write(1, &av[1][i], 1);
                        array[(unsigned char)av[1][i]] = 1;
                    }
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
