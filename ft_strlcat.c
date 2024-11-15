/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:42:22 by magalean          #+#    #+#             */
/*   Updated: 2024/11/02 12:28:26 by aritz            ###   ########.fr       */
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
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = dest_len;
	j = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[j] != '\0' && (i < size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

/*int main() {
    const char *src = "Hello";
    char dest[12] = "World!";  // Destino con espacio suficiente
    // size_t size = sizeof(dest); // Tamaño total de dest

    // Llamada a ft_strlcat
    size_t result = ft_strlcat(dest, src, 12);

    // Mostrar el resultado
    printf("Resultado: %s\n", dest);
    printf("Longitud total esperada: %ld\n", result);
    // printf("Longitud de 'dest' después de concatenar: %ld\n", ft_strlcat(dest, src, size));

    return 0;
}*/