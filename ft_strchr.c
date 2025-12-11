/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:53:11 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 22:01:36 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Busca la primera aparicion del caracter c en la cadena s
char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc; // Convertir c a unsigned char

	uc = (unsigned char) c;
	while (*s) // Recorre la cadena hasta el final 
	{
		if ((unsigned char)*s == uc) // Compara cada caracter con c
			return ((char *)s); // Si encuentra una coincidencia, devuelve la direccion
		s++; // Avanza al siguiente caracter
	}
	if (uc == '\0') // Si c es el caracter nulo, devuelve la direccion del final de la cadena
		return ((char *)s); // Apunta al terminador nulo
	return (NULL); // Si no se encuentra c, devuelve NULL
}
/*
#include <stdio.h>
int main (void)
{
	const char *desfile;
	desfile = "Busca aqui tu letra";
	int letra;
	letra = 'a';
	char *direccion;
	direccion = ft_strchr(desfile, letra);
	printf ("La letra está en la posición: %p (sitio hexadecimal)\n", direccion);
	printf ("La letra está en la posición: %s (sitio en la frase)\n", direccion);
}
La letra está en la posición: 0x5d288403200c (sitio hexadecimal)
La letra está en la posición: a aqui tu letra (sitio en la frase)
*/