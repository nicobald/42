/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utilisateur <utilisateur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:44:26 by nbaldes           #+#    #+#             */
/*   Updated: 2025/04/08 09:53:18 by utilisateur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void recurs(int n, char *str, int *i)
{
    if (n / 10 != 0)
        recurs(n / 10, str, i)
    str[*i] = n (n % 10) + '0';
    (*i)++;
    return ;
}

char *itoa(int n)
{
    int i;

    i = 0;
    char *str = malloc(12);
    if (n < 0)
    {
        str[i] = '-';
        i++;
        n = -n;
    }
    recurs(n, str, i)
    str[i] = '\0';
    return (str);
}
