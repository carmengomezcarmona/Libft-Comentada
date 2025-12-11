/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:11:34 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:28:44 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//la busca el caracter c (convertido a unsigned char) en los n primeros
//bytes de la zona de memoria apuntada por s.
//Devuelve un puntero al byte encontrado o NULL si no se encuentra.
void	*ft_memchr(const void *s, int c, size_t n) 
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n) //recorre los n primeros bytes
	{
		if (ptr[i] == (unsigned char)c) //compara cada byte con c
			return (&ptr[i]); //devuelve puntero al byte encontrado
		i++;//incrementa el indice
	}
	return (NULL);//si no se encuentra, devuelve NULL
}
