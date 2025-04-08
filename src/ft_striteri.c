/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utilisateur <utilisateur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:45:12 by nbaldes           #+#    #+#             */
/*   Updated: 2025/04/08 10:05:54 by utilisateur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;

    i = 0;
    result = malloc(ft_strlen(s) + 1)
    if (!s)
        return (NULL);
    while(s[i])
    {
        (*f)(i, s);
    }
}