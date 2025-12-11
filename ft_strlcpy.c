/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:33:50 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:53:57 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// copia hasta dstsize - 1 caracteres de src a dst y añade un null al final
// devuelve la longitud de src
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize) //copia src en dst
{
	size_t	i;

	i = 0;
	if (dstsize == 0) // si dstsize es 0, no se copia nada
		return (ft_strlen(src)); // devuelve la longitud de src
	while (src[i] != '\0' && i < (dstsize -1)) // copia hasta dstsize - 1 caracteres
	{
		dst[i] = src[i]; // copia el caracter de src a dst
		i++; // incrementa el indice
	}
	if (dstsize != 0) // si dstsize no es 0, añade el null al final
	{
		dst[i] = '\0'; // añade el null al final
	}
	return (ft_strlen(src)); // devuelve la longitud de src
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char destino[10];               // buffer destino, suficiente para copiar
    const char origen[] = "Hola Mundo"; // cadena que vamos a copiar
    size_t resultado;               // aquí guardamos lo que devuelve ft_strlcpy
    size_t tam = sizeof(destino);   // tamaño total del buffer destino

    // Llamamos a ft_strlcpy para copiar origen a destino
    resultado = ft_strlcpy(destino, origen, tam);

    // Mostramos resultados
    printf("Cadena copiada: %s\n", destino);        // cadena final en destino
    printf("Longitud total de la cadena origen: %zu\n", resultado);
    // resultado = longitud de origen
    // si size > longitud origen, copia completa
    // si size <= longitud origen, se trunca y se asegura '\0'

    return 0;
}
*/