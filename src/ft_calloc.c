/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utilisateur <utilisateur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:00:03 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 11:00:16 by utilisateur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_calloc(size_t count, size_t size)
{
    void *result;

    result = malloc(size * count);
    if (!result)
            return(NULL);
        ft_memset(result, 0, (count * size));
    return(result);
}