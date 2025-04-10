/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:44:26 by nbaldes           #+#    #+#             */
/*   Updated: 2025/04/08 17:20:59 by nbaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static int	ft_nbrlen(long nbr)
{
	int	len;

	len = (nbr <= 0) ? 1 : 0;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static void	ft_convert(char *str, long nbr, int len)
{
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	else if (nbr == 0)
	{
		str[0] = '0';
	}
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*str;

	nbr = n;
	len = ft_nbrlen(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	ft_convert(str, nbr, len);
	return (str);
}
