/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:38:51 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 14:40:12 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s,size_t n) //reset mem to 0 on n octets
{
    unsigned char *str;
    size_t i;

    str = (unsigned char*)s;
    i = 0;
    while(i < n)
    {
        str[i] = 0;
        i++;
    }
}