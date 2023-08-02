/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:34:58 by yozden            #+#    #+#             */
/*   Updated: 2023/07/08 10:35:29 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	char		*sc;

	i = 0;
	dest = (char *)dst;
	sc = (char *)src;
	if (!sc && !dest)
		return (0);
	while (i < n)
	{
		dest[i] = sc[i];
		i++;
	}
	return (dest);
}
