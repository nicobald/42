/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:42:07 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/08 17:22:44 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *s, char a) //check for the adress of the first occ of a char
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == a)
            return (&s[i]);
        i++;
    }
    if (a == '\0')
        return (&s[i]);
    return (NULL);
}