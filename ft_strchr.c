/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:42:07 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/10 17:05:58 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strlen_secu(char *str)
{
    int i;

    i = 0;
    if (str)
    {
        while(str[i])
            i++;
    }
    return (i);
}
char *ft_strchr(char *s, char a) //check for the adress of the first occ of a char
{
    int i;

    i = 0;
    if (!a)
        return (s + ft_strlen_secu(s)); 
    if (!s)
        return (NULL);
    while (s[i])
    {
        if (s[i] == a)
            return (&s[i]);
        i++;
    }
    return (NULL);
}