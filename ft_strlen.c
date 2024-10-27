/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:31:21 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 18:18:06 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_strlen(char *l)
{
	int	i;

	i = 0;
	while (l[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
    // Probar con una cadena vacía
    char *test_str = "";
    printf("ft_strlen(\"\") = %d\n", ft_strlen(test_str)); 
	// Debería retornar 0

    // Probar con una cadena corta
    test_str = "Hola";
    printf("ft_strlen(\"%s\") = %d\n", test_str, ft_strlen(test_str)); 
	// Debería retornar 4

    // Probar con una cadena más larga
    test_str = "Hola, mundo!";
    printf("ft_strlen(\"%s\") = %d\n", test_str, ft_strlen(test_str)); 
	// Debería retornar 12

    // Probar con una cadena con espacios
    test_str = "Esto es una prueba.";
    printf("ft_strlen(\"%s\") = %d\n", test_str, ft_strlen(test_str)); 
	// Debería retornar 19

    // Probar con caracteres especiales
    test_str = "\t\n\r";
    printf("ft_strlen(\"\\t\\n\\r\") = %d\n", ft_strlen(test_str)); 
	// Debería retornar 3

    // Probar con una cadena que contiene un solo carácter
    test_str = "A";
    printf("ft_strlen(\"%s\") = %d\n", test_str, ft_strlen(test_str)); 
	// Debería retornar 1

    return 0;
}*/