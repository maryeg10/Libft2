/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:14:52 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 20:15:49 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <unistd.h>*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*aux;
	unsigned char		*dst;
	size_t				counter;

	aux = (unsigned char *)src;
	dst = (unsigned char *)dest;
	counter = n;
	if (aux < dst && dst < aux + n)
	{
		while (counter--)
			dst[counter] = aux[counter];
	}
	else
		ft_memcpy(dst, aux, counter);
	return (dest);
}

/*int  main(void)
{
  unsigned char src[] = "Hello World";
  unsigned char *dest;
  size_t n = 13;
  
  ft_memmove(dest, src, n);
  //printf("%s\n", dest);//
  //printf("%s\n", dest);
  return (0);
}*/