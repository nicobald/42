/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:00:35 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 17:07:57 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(char *str)
{
    int i;
    int lenght;
    char *result;

    lenght = ft_strlen(str);
    result = malloc(lenght + 1);
    if (!result)
        return (NULL);
    i = 0;
    while(str[i])
        {
            result[i] = str[i];
            i++;
        }
    result[i] = '\0';
    return(result); 
}