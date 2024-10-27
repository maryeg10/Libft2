/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:18:16 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 19:55:42 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	*ft_strncmp(const	char	*str1, const	char	*str2, size_t n)
{
	unsigned char	i;

	i = 0;
	while (i < n && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	if ((i < n) && (str1[i] != '\0') && (str2[i] != '\0'))
	{
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}

/*int  main(void)
{
  size_t n = 5;
  char *str1 = "Hello";
  char *str2 = "world";
  printf("%d\n", ft_strncmp(str1, str2, n));
}*/