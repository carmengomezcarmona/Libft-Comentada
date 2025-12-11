/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:36:29 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:52:28 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// la función strlcat concatena la cadena src al final de dst.
// La función toma el tamaño total del búfer dst como un argumento
// para evitar desbordamientos de búfer.
// Devuelve la longitud total de la cadena que intentó crear,
// es decir, la longitud inicial de dst más la longitud de src.	
size_t	ft_strlcat(char *dst, const char *src, size_t size) // dst es el destino, src es la fuente, size es el tamaño total del búfer dst
{
	size_t	dst_len; // longitud de dst
	size_t	src_len; // longitud de src
	size_t	i; 

	dst_len = ft_strlen(dst); 
	src_len = ft_strlen(src);
	if (size <= dst_len) //si el tamaño es menor o igual a la longitud de dst
		return (size + src_len); // devuelve size + longitud de src
	i = 0;
	while (src[i] && (dst_len + i +1) < size) // mientras src[i] no sea nulo y la longitud de dst + i + 1 sea menor que size
	{
		dst[dst_len + i] = src[i]; // concatena src a dst
		i++; // incrementa i
	}
	dst[dst_len + i] = '\0'; // añade el carácter nulo al final de dst
	return (dst_len + src_len); // devuelve la longitud total de la cadena que intentó crear
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char destino[20] = "Hola ";    // cadena destino, debe tener espacio suficiente
    char origen[] = "Mundo!";      // cadena que vamos a concatenar
    size_t resultado;               // aquí guardaremos lo que devuelve ft_strlcat
    size_t tam = sizeof(destino);   // tamaño total del buffer destino

    // Llamamos a ft_strlcat para añadir origen al final de destino
    resultado = ft_strlcat(destino, origen, tam);

    // Mostramos resultados
    printf("Cadena final: %s\n", destino);          // la cadena combinada
    printf("Longitud total que ft_strlcat intentó crear: %zu\n", resultado);
    // resultado = longitud de destino original + longitud de origen
    // si size > longitud destino original, no hay truncamiento
    // si size <= longitud destino original, la cadena se trunca

    return 0;
}
*/