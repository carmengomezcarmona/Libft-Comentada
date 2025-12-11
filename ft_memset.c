/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:38:30 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 00:36:12 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Rellena n bytes de memoria con un caracter c
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr; //convetimos void a unsigned char
	size_t			i; // para trabajar byte a byte

	ptr = (unsigned char *)s; 
	i = 0; // inicializamos el contador
	while (i < n) //mientras no lleguemos a n
	{
		ptr[i] = (unsigned char)c; //rellenamos el byte con el caracter c
		i++; //incrementamos el contador
	}
	return (s); //devolvemos el puntero al bloque de memoria rellenado
}
/*
#include <stdio.h>
#include <stddef.h> // para size_t 
int main(void)
{
	int pegatina;
	pegatina = 'E';
	size_t n;
	n = 3;
	char s[] = "aaaaaaaaaa";
	char *resultadoFuncion;
	resultadoFuncion = ft_memset(s, pegatina, n);
	printf("%s",resultadoFuncion);
}
int main (void)
{
    char trozo[]= "Rellenarconmemset";
    int caracter;
    caracter = 'P'; //caracter con el que rellenar
    size_t cuanto;
    cuanto = 5;
    printf("Antes:  %s\n", trozo);
    // LLAMAMOS A LA FUNCIÓN para q rellene con n los primeros 5 caracteres
    ft_memset(trozo, caracter, cuanto);
    printf("Después: %s\n", trozo);
    return 0;
}

al compilar:Antes:  Rellenarconmemset
Después: PPPPPnarconmemset
*/