/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:40:38 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 17:11:04 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, char *src, size_t n) //copy src in dest on n char
{
    size_t i;
    size_t size;

    size = ft_strlen(src);
    i = 0;
    if (n == 0)
        return (size);
    while (src[i] && i < n - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (size);
}