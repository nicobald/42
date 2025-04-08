/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:04:32 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/08 17:22:16 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char *s, unsigned int start, size_t len)
{
    char *sub;
    unsigned int i;
    unsigned int j;

    if(!s)
        return (NULL);
    j = start;
    i = 0;
    if(start >= (unsigned int)ft_strlen(s))
    {
        sub = malloc(1);
        sub[0] = '\0';
        return(sub);
    }
    if (len > (size_t)ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    sub = malloc(len + 1);
    if(!sub)
        return(NULL);
    while(s[j] && i < len)
        {
            sub[i] = s[j];
            i++;
            j++;
        }
    sub[i] = '\0';
    return(sub);
}