/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:38:17 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 16:51:46 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int a, size_t n) // put n time char a into the mem
{
    size_t i;
    unsigned char a1;
    unsigned char *s1;

    i = 0;
    a1 = (unsigned char)a;
    s1 = (unsigned char *)s;
    while (i < n)
    {
        s1[i] = a1;
        i++;
    }
    return (s);
}