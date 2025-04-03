/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utilisateur <utilisateur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:43:22 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 13:57:41 by utilisateur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) //go trought the mem on n octet to return the adress of the first occurence of 'c'
{
    size_t i;
    unsigned char *str;
    unsigned char ch;

    ch = (unsigned char )c;
    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if(str[i] == ch)
            return (&str[i]);
        i++;
    }
    return (NULL);
}