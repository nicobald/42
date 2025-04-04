/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:35:26 by utilisateur       #+#    #+#             */
/*   Updated: 2025/04/03 17:44:37 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c) // check if char c is alphabetic
{
    if ((c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}