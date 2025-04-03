/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utilisateur <utilisateur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:43:22 by utilisateur       #+#    #+#             */
/*   Updated: 2025/03/27 17:21:11 by utilisateur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, size_t n)
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