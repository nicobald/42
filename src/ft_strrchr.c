/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:42:34 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 17:11:33 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(char *s, int c)
{
    int i = ft_strlen(s);

    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)s + i);
        i--;
    }
    return (NULL);
}
