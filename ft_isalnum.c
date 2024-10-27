/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:47:41 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 18:13:26 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
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
	// Probar con un dígito
	char test_char = '5';
	printf("ft_isalnum('%c') = %d\n", test_char, ft_isalnum(test_char)); 
	// Debería retornar 1

	// Probar con una letra minúscula
	test_char = 'b';
	printf("ft_isalnum('%c') = %d\n", test_char, ft_isalnum(test_char)); 
	// Debería retornar 1

	// Probar con una letra mayúscula
	test_char = 'G';
	printf("ft_isalnum('%c') = %d\n", test_char, ft_isalnum(test_char)); 
	// Debería retornar 1

	// Probar con un carácter no alfanumérico
	test_char = '#';
	printf("ft_isalnum('%c') = %d\n", test_char, ft_isalnum(test_char)); 
	// Debería retornar 0

	// Probar con un espacio
	test_char = ' ';
	printf("ft_isalnum('%c') = %d\n", test_char, ft_isalnum(test_char)); 
	// Debería retornar 0

	// Probar con el carácter nulo
	test_char = '\0';
	printf("ft_isalnum('\\0') = %d\n", ft_isalnum(test_char)); /
	/ Debería retornar 0

	// Probar con un número fuera del rango de caracteres ASCII
	int test_num = 150;
	printf("ft_isalnum(%d) = %d\n", test_num, ft_isalnum(test_num)); 
	// Debería retornar 0

	return 0;
}*/