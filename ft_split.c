/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:44:29 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:43:12 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// la funcion ft_split divide una cadena en subcadenas
// basandose en un delimitador especifico y devuelve
// un array de punteros a las subcadenas resultantes.
static size_t	ft_count_words(const char *s, char c) // cuenta el numero de palabras en la cadena
{
	size_t	i; // indice para recorrer la cadena
	size_t	words; // contador de palabras

	i = 0;
	words = 0;
	while (s[i]) // mientras no se llegue al final de la cadena
	{
		while (s[i] && s[i] == c) // saltar delimitadores
			i++; // avanzar el indice
		if (s[i] && s[i] != c) // si se encuentra una palabra
			words++; // incrementar el contador de palabras
		while (s[i] && s[i] != c) // avanzar hasta el siguiente delimitador
			i++; // avanzar el indice
	}
	return (words); // devolver el numero de palabras encontradas
}

static char	*ft_get_word(const char *s, char c, size_t *i) // obtiene una palabra de la cadena
{
	size_t	start; // indice de inicio de la palabra
	size_t	len; // longitud de la palabra

	start = *i; // guardar el indice de inicio
	len = 0; // inicializar la longitud
	while (s[*i] && s[*i] != c) // mientras no se llegue al final de la palabra y no sea un delimitador
	{
		(*i)++; // avanzar el indice
		len++; // incrementar la longitud
	}
	return (ft_substr(s, start, len)); // devolver la subcadena que representa la palabra
}

static char	**ft_free(char **tab, size_t i) // libera la memoria asignada en caso de error
{
	while (i > 0) // mientras haya palabras asignadas
	{
		i--; // decrementar el indice
		free(tab[i]); // liberar la memoria de la palabra
	}
	free(tab); // liberar la memoria del array de punteros
	return (NULL); // devolver NULL para indicar error
}

char	**ft_split(const char *s, char c) // divide la cadena en subcadenas basadas en el delimitador c
{
	char	**tab; // array de punteros a las subcadenas
	size_t	i; // indice para recorrer la cadena
	size_t	j; // indice para recorrer el array de punteros
	size_t	words; // numero de palabras encontradas

	if (!s) // si la cadena es NULL
		return (NULL); // devolver NULL
	words = ft_count_words(s, c); // contar el numero de palabras
	tab = (char **)malloc((words + 1) * sizeof(char *)); // asignar memoria para el array de punteros
	if (!tab) // si la asignacion falla
		return (NULL); // devolver NULL
	i = 0; // inicializar el indice de la cadena
	j = 0; // inicializar el indice del array de punteros 
	while (j < words) // mientras queden palabras por asignar
	{// obtener cada palabra y asignarla al array
		while (s[i] && s[i] == c) // saltar delimitadores
			i++; // avanzar el indice
		tab[j] = ft_get_word(s, c, &i); // obtener la palabra y asignarla al array
		if (!tab[j]) // si la asignacion falla
			return (ft_free(tab, j)); // liberar la memoria y devolver NULL
		j++; // avanzar al siguiente indice del array
	}
	tab[j] = NULL; // marcar el final del array con NULL
	return (tab); // devolver el array de punteros a las subcadenas
}

/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char *string;
	string = "...Hola..mundo..esto..es...un.test...";
	char delimitador;
	delimitador = '.';
	char **resultado;
	resultado = ft_split(string, delimitador);
	printf("Resultado de ft_split:\n");
	int i = 0;
    while (resultado[i] != NULL)
    {
        printf("Libro %d: [%s]\n", i, resultado[i]);
        i++;
    }
		i = 0;
    while (resultado[i] != NULL)
    {
        free(resultado[i]);
        i++;
    }
    free(resultado);

    return (0);
}*/
