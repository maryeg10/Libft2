/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:19:57 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 19:56:11 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_aux;
	const unsigned char	*s2_aux;

	i = 0;
	s1_aux = (const unsigned char *)s1;
	s2_aux = (const unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	if (s1 && s2 && n > 0)
	{
		while (s1_aux[i] != s2_aux[i])
		{
			return (s1_aux[i] - s2_aux[i]);
		}
	}
	return (0);
}
