/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aritz <aritz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:31:44 by magalean          #+#    #+#             */
/*   Updated: 2024/11/02 12:09:44 by aritz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stddef.h>*/

char	*ft_strchr(const char *s, int m)
{
	int		i;
	char	*s_aux;
	unsigned char	m_aux;

	m_aux = (unsigned char)m;
	s_aux = (char *)s;
	i = 0;
	while (s_aux[i])
	{
		if (s_aux[i] == m_aux)
		{
			return (&s_aux[i]);
		}
		i++;
	}
	if (s_aux[i] == m_aux)
		return (&s_aux[i]);
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