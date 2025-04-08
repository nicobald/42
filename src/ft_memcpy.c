/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:39:21 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/08 17:23:40 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest,const void *src, size_t n) //copy src into dest on n octets
{
    size_t i;
    unsigned char *dest1;
    const unsigned char *src1;

    i = 0;
    dest1 = (unsigned char *)dest;
    src1 = (unsigned char *)src;
    while(i < n)
    {
       dest1[i] = src1[i];
       i++;
    }
    return dest;
}