/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:19:12 by magalean          #+#    #+#             */
/*   Updated: 2024/11/15 18:52:43 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

char	*ft_strrchr(const char *s, int m)
{
	int				i;
	unsigned char	m_aux;

	m_aux = (unsigned char)m;
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == m_aux)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*int  main(void)
{
  char  str[] = "Hello World";
  char  *ptr;
  ptr = ft_strrchr(str, 'l');
  printf("%s\n", ptr);
  return (0);
}*/