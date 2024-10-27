/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:40:00 by magalean          #+#    #+#             */
/*   Updated: 2024/09/11 19:26:54 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

/*int main()
{
	// Probar con un dígito
	char test_char = '5';
	printf("ft_isdigit('%c') = %d\n", test_char, ft_isdigit(test_char)); 
	// Debería retornar 1

	// Probar con un carácter que no es un dígito
	test_char = 'A';
	printf("ft_isdigit('%c') = %d\n", test_char, ft_isdigit(test_char)); 
	// Debería retornar 0

	// Probar con otro carácter que no es un dígito
	test_char = '-';
	printf("ft_isdigit('%c') = %d\n", test_char, ft_isdigit(test_char)); 
	// Debería retornar 0

	// Probar con el dígito límite inferior
	test_char = '0';
	printf("ft_isdigit('%c') = %d\n", test_char, ft_isdigit(test_char)); 
	// Debería retornar 1

	// Probar con el dígito límite superior
	test_char = '9';
	printf("ft_isdigit('%c') = %d\n", test_char, ft_isdigit(test_char)); 
	// Debería retornar 1

	// Probar con un número directamente 
	(no debería ser tratado como dígito en ASCII)
	int test_num = 5;
	printf("ft_isdigit(%d) = %d\n", test_num, ft_isdigit(test_num)); 
	// Debería retornar 0, porque 5 no es '5'

	return 0;
}*/