/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:22:37 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 20:01:16 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while ((src[i] != '\0') && (i < size -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (i);
}

/*int main ()
{
	char	x[] = "Prueba copy :)";
	char dst[15];
	size_t	size = sizeof(dst);

	ft_strlcpy(dst, x, size);
	printf("result --> [%ld]",ft_strlcpy(dst, x, size));
	printf("result --> [%s]",strlcpy(dst, x, size));
	// printf("%s",dst);
}*/