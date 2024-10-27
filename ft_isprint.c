/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:14:02 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 18:13:43 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/
int	ft_isascii( int c)
{
	if (c >= 32 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main()
{
    // Probar con un carácter imprimible dentro del rango
    int test_char = 'A'; // 65 en ASCII
    printf("ft_isascii('%c') = %d\n", test_char, ft_isascii(test_char)); 
	// Debería retornar 1

    // Probar con el carácter límite inferior del rango imprimible
    test_char = ' '; // 32 en ASCII
    printf("ft_isascii('%c') = %d\n", test_char, ft_isascii(test_char)); 
	// Debería retornar 1

    // Probar con el carácter límite superior del rango imprimible
    test_char = 127; // DEL en ASCII
    printf("ft_isascii(%d) = %d\n", test_char, ft_isascii(test_char)); 
	// Debería retornar 1

    // Probar con un carácter por debajo del rango imprimible
    test_char = 31; // Carácter de control
    printf("ft_isascii(%d) = %d\n", test_char, ft_isascii(test_char)); 
	// Debería retornar 0

    // Probar con un carácter fuera del rango ASCII
    test_char = 128; // Fuera del rango ASCII
    printf("ft_isascii(%d) = %d\n", test_char, ft_isascii(test_char)); 
	// Debería retornar 0

    // Probar con un número negativo
    test_char = -1;
    printf("ft_isascii(%d) = %d\n", test_char, ft_isascii(test_char)); 
	// Debería retornar 0

    return 0;
}*/