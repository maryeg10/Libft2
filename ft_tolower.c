/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:19:32 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 19:44:18 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_tolower(char mayus)
{
	int	i;

	i = 0;
	if (mayus >= 'A' && mayus <= 'Z')
	{
		i = mayus + 32;
		return (i);
	}
	return (mayus);
}

/*#include <stdio.h>
char ft_toupper(char mayus);
int  main(void)
{
  char  mayus;

  mayus = 'a';
  printf("%c\n", ft_tolower(mayus));
  mayus = 'A';
  printf("%c\n", ft_tolower(mayus));
  mayus = ' ';
  printf("%c\n", ft_tolower(mayus));
  mayus = '4';
  printf("%c\n", ft_tolower(mayus));

  return (0);
}*/