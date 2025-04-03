/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:43:36 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 14:47:11 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) //compare 2 differente part of the mem
{
    size_t i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while(i < n)
    {
        if (str1[i] == str2[i])
            i++;
        else
            return (str1[i] - str2[i]);
    }
    return (0);
}