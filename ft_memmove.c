/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:33:33 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 21:37:50 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//igual q memcpy pero se asegura de no solapar 
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst == src || n == 0)
		return (dst);
	if (!dst && !src) //si no hay cajitas no puedo copiar nada 
		return (NULL);
	if (d < s) //El destino está DETRÁS del origen (Seguro copiar normal) OJO: Comparamos los punteros originales 'dest' y 'src'
		ft_memcpy(dst, src, n);
	else //El destino está DELANTE y solapa (Peligro)
	{
		i = n;
		while (i > 0) //// Copiamos del final al principio (n -> 0)
		{
			i --; // Primero resto porque el array va de 0 a n-1
			d[i] = s[i];
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{
    char cajadestino[20] = "Esto es el destino";
    char cajaorigen[] = "Esto es el origen";
    size_t numero;
    numero = 8;
    char *resultado;
    resultado = ft_memmove(cajadestino, cajaorigen, numero);
    printf("%s (cadena final) \n", resultado);
    printf("%p (direccion) \n", resultado); //cuando lo q devuelve es un puntero %p la direccion
    return (0);
}
*/