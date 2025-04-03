/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:41:11 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 17:10:05 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;
    size_t i;
    size_t j;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (size <= dest_len)
        return (size + src_len);
    i = dest_len;
    j = 0;
    while (src[j] && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}
