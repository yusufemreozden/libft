/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:45:39 by yozden            #+#    #+#             */
/*   Updated: 2023/07/08 10:45:46 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*p1;

	p = (unsigned char *)s1;
	p1 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((p[i] == p1[i]) && i < n - 1)
		i++;
	return (p[i] - p1[i]);
}
