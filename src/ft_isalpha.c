/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utilisateur <utilisateur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:35:26 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 13:46:20 by utilisateur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(char c) // check if char c is alphabetic
{
    if ((c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}