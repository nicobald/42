/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:42:57 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/08 17:22:01 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) // compare 2 strings on n char
{
    size_t i;

    i = 0;
    while ((s1[i] || s2[i]) && (i < n))
    {
        if (s1[i] == s2[i])
            i++;
        else
            return (s1[i] - s2[i]);
    }
    return (0);
}