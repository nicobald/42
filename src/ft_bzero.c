/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utilisateur <utilisateur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:38:51 by utilisateur       #+#    #+#             */
/*   Updated: 2025/03/27 16:01:06 by utilisateur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s,size_t n)
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