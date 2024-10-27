/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:42:22 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 20:03:41 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stddef.h>
#include <stdio.h>*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dest[i] != '\0')
		i++;
	j = 0;
	if (size <= i)
		return (size + src_len);
	while (src[j] != '\0' && (i < size - 1))
	{
		dest[i] = src[j];
		{
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (i + j);
}

/*int main() {
    char dest[20] = "Hello";  // Destino con espacio suficiente
    const char *src = " World!";
    size_t size = sizeof(dest); // Tamaño total de dest

    // Llamada a ft_strlcat
    size_t result = ft_strlcat(dest, src, 8);

    // Mostrar el resultado
    printf("Resultado: %s\n", dest);
    printf("Longitud total esperada: %ld\n", result);
    printf("Longitud de 'dest' después de concatenar: 
	%ld\n", ft_strlcat(dest, src, size));

    return 0;
}*/