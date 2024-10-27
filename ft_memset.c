/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:15:09 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 20:08:08 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_aux;

	s_aux = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		s_aux[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int main() {
	char buffer[20];

	// Llenar el buffer con el carácter 'X' usando ft_memset
	ft_memset(buffer, 'X', sizeof(buffer));

	// Imprimir el contenido del buffer
	printf("Contenido del buffer después de ft_memset:\n");
	for (int i = 0; i < 20; i++) {
		printf("%c ", buffer[i]);
	}
	printf("\n");

	// Usando memset para comparación
	memset(buffer, 'A', sizeof(buffer));

	printf("Contenido del buffer después de memset estándar:\n");
	for (int i = 0; i < 20; i++) {
		printf("%c ", buffer[i]);
	}
	printf("\n");

	return 0;
}*/
