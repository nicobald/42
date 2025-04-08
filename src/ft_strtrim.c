/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:56:16 by nbaldes           #+#    #+#             */
/*   Updated: 2025/04/08 17:13:32 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	start;
    int end;
	int	len;

	j = 0;
	i = 0;
		while (s1[i] == set[j])
		{
			i++;
			j++;
		}
	start = i;
	len = ft_strlen((char *)s1);
        while (s1[len] == set[j])
        {
            len--;
            j--;
        }
   end = len;
   return(ft_substr((char*)s1, start, end));
}