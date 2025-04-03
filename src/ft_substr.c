/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utilisateur <utilisateur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:04:32 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 11:04:45 by utilisateur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    unsigned int i;
    unsigned int j;

    j = start;
    i = 0;
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    if(start >= ft_strlen(s))
    {
        sub = malloc(1);
        sub[0] = '\0';
        return(sub);
    }
    sub = malloc((sizeof char) * len + 1);
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