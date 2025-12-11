/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:07:23 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:55:58 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Aplica la función 'f' a cada carácter de la cadena 's', pasando su índice como primer argumento.
// Devuelve una nueva cadena resultante de las aplicaciones sucesivas de 'f'.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new; // Nueva cadena resultante
	size_t	i; 	 // Índice para recorrer la cadena

	if (!s || !f) // Verifica si la cadena o la función son nulas
		return (NULL);
	i = 0;
	new = malloc(ft_strlen(s) + 1); // Reserva memoria para la nueva cadena
	if (!new) // Verifica si la asignación de memoria fue exitosa
		return (NULL);
	while (s[i]) // Recorre cada carácter de la cadena original
	{
		new[i] = f(i, s[i]); // Aplica la función 'f' y almacena el resultado en la nueva cadena
		i++; 			 // Incrementa el índice
	}
	new[i] = '\0'; // Añade el carácter nulo al final de la nueva cadena
	return (new); // Devuelve la nueva cadena
}

/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h> // para free

// Función que transforma un carácter en mayúscula
// El índice i no se usa, pero ft_strmapi la necesita
char ft_to_upper(unsigned int i, char c)
{
    (void)i; // ignoramos el índice
    if (c >= 'a' && c <= 'z') // si es minúscula
        return c - 32;        // devolvemos la mayúscula
    return c;                  // si no, devolvemos el mismo carácter
}
int main(void)
{
    char *s = "hola";                       // cadena original
    char *res1;                              // puntero para la nueva cadena

    res1 = ft_strmapi(s, ft_to_upper);       // llamamos a ft_strmapi: crea nueva cadena

    printf("Cadena original: %s\n", s);     // mostramos la original
    printf("Mayúsculas: %s\n", res1);       // mostramos la cadena transformada

    free(res1);                              // liberamos la memoria que ft_strmapi reservó

    return 0;
}
*/
