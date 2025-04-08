/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:44:52 by nbaldes           #+#    #+#             */
/*   Updated: 2025/04/08 17:21:58 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *result;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	result = malloc(ft_strlen((char *)s) + 1);
	if (!s)
	{
		return (NULL);
	}
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
    result[i] = '\0';
	return (result);
}