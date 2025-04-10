/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:45:12 by nbaldes           #+#    #+#             */
/*   Updated: 2025/04/08 17:21:12 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, char (*f)(unsigned int, char *))
{
    unsigned int i;

    i = 0;
    if (!s || !f)
        return ;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
    return ;
}