/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:56:16 by nbaldes           #+#    #+#             */
/*   Updated: 2025/04/10 17:05:57 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	if (!s1)
		return (NULL);
	//if (!set)
	// 	return ((char*)s1);
	i = 0;
	len = ft_strlen(((char *)s1));
	while (ft_strchr((char *)set, s1[i]))
	{
		i++;
	}
	while (ft_strchr((char *)set, s1[len]))
	{
		len--;
	}
	return (ft_substr((char *)s1, i, len - i + 1));
}
