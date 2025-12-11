/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:49:28 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:27:31 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//la función memcmp compara los primeros n bytes de las áreas de memoria s1 y s2.
int	ft_memcmp(const void *s1, const void *s2, size_t n) //compara dos bloques de memoria hasta n bytes
{
	unsigned char	*p1; //punteros a los bloques de memoria
	unsigned char	*p2; //punteros a los bloques de memoria
	size_t			i; //contador

	p1 = (unsigned char *)s1; //puntero al primer bloque de memoria
	p2 = (unsigned char *)s2; //puntero al segundo bloque de memoria
	i = 0;
	while (i < n) //bucle que recorre los bloques de memoria hasta n bytes
	{
		if (p1[i] != p2[i]) //si los bytes son diferentes
			return ((p1[i] - p2[i])); //devuelve la diferencia entre los bytes
		i++;//incrementa el contador
	}
	return (0); //si son iguales devuelve 0
}
