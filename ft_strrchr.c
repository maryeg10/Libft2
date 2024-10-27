/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:19:12 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 19:46:45 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

char	*ft_strrchr(const char *str, int m)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == m)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return ((char *)&str[i]);
}

/*int  main(void)
{
  char  str[] = "Hello World";
  char  *ptr;
  ptr = ft_strrchr(str, 'l');
  printf("%s\n", ptr);
  return (0);
}*/