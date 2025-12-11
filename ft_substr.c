/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 16:53:27 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 00:04:02 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Devuelve una subcadena de la cadena 's', comenzando desde el índice 'start'
// y con una longitud máxima de 'len' caracteres.
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i; // Índice para recorrer la subcadena
	size_t	slen; // Longitud de la cadena original
	char	*copy; // Puntero para la subcadena resultante

	if (!s) // Verifica si la cadena original es NULL
		return (NULL);
	slen = ft_strlen(s); // Calcula la longitud de la cadena original
	if (start >= slen) // Si el índice de inicio está fuera de los límites
		return (ft_strdup("")); // Devuelve una cadena vacía
	// Ajusta la longitud si excede los límites de la cadena original
	if (len > slen - start) // Evita desbordamientos
		len = slen - start;	// Ajusta la longitud
	// Reserva memoria para la subcadena (+1 para el carácter nulo)
	copy = malloc(len + 1); // Reserva memoria
	if (!copy) // Verifica si la reserva de memoria fue exitosa
		return (NULL);
	i = 0;
	while (i < len) // Copia los caracteres desde la cadena original
	{
		copy[i] = s[start + i]; // Copia el carácter
		i++; 
	}
	copy[i] = '\0'; // Añade el carácter nulo al final
	return (copy); // Devuelve la subcadena resultante
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *cadena = "Hola42 en Málaga";
    unsigned int inicio = 5;
    size_t longitud = 2;
    char *subcadena;

    // Obtenemos la subcadena desde 'inicio' con longitud 'longitud'
    subcadena = ft_substr(cadena, inicio, longitud);

    if (subcadena)
    {
        printf("Subcadena: %s\n", subcadena);
        free(subcadena); // siempre liberamos la memoria alocada
    }
    else
    {
        printf("Error al crear la subcadena\n");
    }

    return 0;
}
*/