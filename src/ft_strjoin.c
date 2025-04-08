/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:03:18 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/08 17:21:17 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char *s1, char *s2)
{
    int i;
    int j;
    int lentot;
    char *result;

    if (!s1)
        s1 = "";
    if (!s2)
        s2 = "";
    lentot = ft_strlen(s1) + ft_strlen(s2);
    result = malloc(lentot + 1);
    if (!s1 || !s2) 
        return (NULL);
    if (!result)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        result[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        result[i + j] = s2[j];
        j++;
    }
    result[i + j] = '\0';
    return (result);
}