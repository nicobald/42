/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utilisateur <utilisateur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:00:35 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 13:58:11 by utilisateur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(char *str)
{
    int i;
    int lenght;
    char *result;

    lenght = ft_strlen(str);
    result = malloc((sizeof char) * lenght + 1);
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