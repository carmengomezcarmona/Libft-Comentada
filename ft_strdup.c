/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:28:00 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:45:52 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// esta funcion duplica un string reservando memoria para el nuevo string 
char	*ft_strdup(const char *s1) // funcion que duplica un string
{
	size_t	len; // longitud del string original
	char	*copy; // puntero para el nuevo string
	size_t	i; // indice para el bucle

	len = ft_strlen (s1); // obtenemos la longitud del string original
	copy = malloc (len + 1); // reservamos memoria para el nuevo string (+1 para el null terminator)
	if (!copy) // comprobamos si la reserva de memoria ha sido exitosa
		return (NULL); //	 si no ha sido exitosa, devolvemos NULL
	i = 0; // inicializamos el indice
	while (i < len) // bucle para copiar el string original al nuevo string
	{// mientras no lleguemos al final del string original
		copy[i] = s1[i]; // copiamos cada caracter
		i++; // incrementamos el indice
	}
	copy[i] = '\0'; // añadimos el null terminator al final del nuevo string
	return (copy); // devolvemos el puntero al nuevo string
}

/*#include <stdlib.h> // para malloc
#include <string.h> // para strcmp
#include <stdio.h> // para printf	
int main(void)
{
    char *original;   // la cadena que queremos duplicar
    char *copia;      // aquí guardaremos la copia hecha por ft_strdup

    original = "Esta es la cadena original.";
    
    // Llamamos a ft_strdup para crear una copia de la cadena
    copia = ft_strdup(original);

    // Comprobamos que la copia no sea NULL y mostramos resultados
    if (copia != NULL)
    {
        printf("Original: %s\n", original);  // mostramos la cadena original
        printf("Copia   : %s\n", copia);     // mostramos la copia
    }
    else
    {
        printf("Error: ft_strdup no pudo reservar memoria.\n");
    }

    // Liberamos la memoria que ft_strdup reservó
    free(copia);

    return 0;
}*/