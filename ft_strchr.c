/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:31:44 by magalean          #+#    #+#             */
/*   Updated: 2024/10/27 20:06:14 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stddef.h>*/
char	*ft_strchr(const	char *str, int m)
{
	int		i;
	char	*aux;

	*aux = (char *)str;
	i = 0;
	while (aux[i])
	{
		if (aux[i] == m)
		{
			return (&aux[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <unistd.h>
int	 main(void)
{
	char *str="hola";
	char *aux;
	aux = str;
	int i = 0;
	while(str[i])
		write(1,&str[i++],1);
	write(1,"\n",1);
	while(*aux)
		write(1,aux++,1);
	write(1,"\n",1);
	aux=ft_strchr(str,'l');
	write(1,aux,1);
	aux=ft_strchr(str,'p');
	write(1,aux,1);

	
}*/