/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:19:57 by magalean          #+#    #+#             */
/*   Updated: 2024/11/02 12:41:17 by aritz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				counter;
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (n == 0)
		return (0);
	counter = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (counter < n)
	{
		if (p1[counter] != p2[counter])
			return (p1[counter] - p2[counter]);
		counter++;
	}
	return (0);
}
