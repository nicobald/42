/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:40:02 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/08 17:23:34 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) //move n char of the mem in an other place 
{
    size_t i;
    unsigned char *dest1;
    const unsigned char *src1;

    i = 0;
    dest1 = (unsigned char *)dest;
    src1 = (unsigned char *)src;
    if (dest1 == src1 || n == 0)
        return (dest);
    else if (dest1 > src1 && dest1 < src1 + n)
    {
        i = n - 1;
        while (i > 0)
        {
            dest1[i] = src1[i];
            i--;
        }
        dest1[i] = src1[i];
        return (dest);
    }
    else
    {
        while (i < n)
        {
            dest1[i] = src1[i];
            i++;
        }
        return (dest);
    }
}