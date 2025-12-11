/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:32:35 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 21:28:29 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char*s)
{
	size_t	i;

	i = 0; //inicializo el contador
	while (s[i] != '\0') //mientras no llegue al final de la cadena
		i++; //incremento el contador
	return (i); //devuelvo el contador
}

/*
Calcula los caracteres de una cadena de texto, incluyendo espacios y signos 
de puntuación
#include <stdio.h>
int main (void)
{
	size_t suma;
	char *frase;
	frase = "Holas";
	suma = ft_strlen (frase);
	printf("La palabra tiene %zu letras", suma);
}
int main (void)
{
	const char *palabra;
	palabra = "ejemplooooooo";
	size_t longitud;
	longitud = ft_strlen(palabra);
	printf("La cadena tiene una longitud de %zu caracteres.\n", longitud);
	return (0);
}*/