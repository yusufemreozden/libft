/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:33:21 by yozden            #+#    #+#             */
/*   Updated: 2023/07/15 14:33:24 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*string;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	string = malloc(sizeof(char) * len + 1);
	if (!string)
		return (NULL);
	string[len] = '\0';
	while (nbr > 0)
	{
		string[--len] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		string[0] = '-';
	if (n == 0)
		string[0] = '0';
	return (string);
}
