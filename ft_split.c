/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:44:29 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/01 14:33:53 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Función auxiliar estática: contar palabras en la cadena
static size_t	ft_count_words(const char *s, char c)
{
	size_t i = 0;      // dedito que recorre la cadena
	size_t words = 0;  // contador de palabras

	while (s[i])
	{
		// saltar delimitadores
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)  // si encontramos letra → palabra
			words++;
		// mover dedito hasta siguiente delimitador
		while (s[i] && s[i] != c)
			i++;
	}
	return words;
}

// Función auxiliar estática: obtener una palabra
static char	*ft_get_word(const char *s, char c, size_t *i)
{
	size_t start = *i;  // donde empieza la palabra
	size_t len = 0;

	// contar longitud hasta delimitador o fin
	while (s[*i] && s[*i] != c)
	{
		(*i)++;
		len++;
	}

	// reservar memoria para la palabra + '\0'
	char *word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return NULL;

	// copiar letras
	size_t j = 0;
	while (j < len)
	{
		word[j] = s[start + j];
		j++;
	}
	word[len] = '\0';  // cerrar palabra
	return word;
}

// Función principal: split
char	**ft_split(char const *s, char c)
{
	if (!s)
		return NULL;

	size_t words = ft_count_words(s, c);  // contar cuántas palabras
	char **array = malloc(sizeof(char *) * (words + 1));  // array de punteros
	if (!array)
		return NULL;

	size_t i = 0;          // dedito para recorrer s
	size_t word_index = 0; // índice de la cajita en el array

	while (s[i])
	{
		// saltar delimitadores
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			char *word = ft_get_word(s, c, &i);  // obtener palabra
			if (!word)  // si falla malloc de la palabra, liberar todo
			{
				while (word_index > 0)
				{
					free(array[word_index - 1]);
					word_index--;
				}
				free(array);
				return NULL;
			}
			array[word_index] = word; // guardar puntero en el array
			word_index++;
		}
	}
	array[word_index] = NULL; // última cajita = NULL
	return array;
}

/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char **result;
    int i;

    char *str = "hola--mundo--42--malaga";
    char delim = '-';

    result = ft_split(str, delim);
    if (!result)
    {
        printf("Error: ft_split devolvió NULL\n");
        return 1;
    }

    i = 0;
    while (result[i])
    {
        printf("Palabra %d: %s\n", i, result[i]);
        free(result[i]);  // liberamos cada palabra
        i++;
    }
    free(result); // liberamos el array final

    return 0;
}*/