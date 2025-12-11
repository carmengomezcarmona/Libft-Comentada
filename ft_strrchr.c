/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:58:27 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 00:01:17 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// busca la ultima aparicion del caracter c en la cadena s
char	*ft_strrchr(const char *s, int c)
{
	const char		*last; // puntero a la ultima aparicion
	unsigned char	uc; // para comparar con el caracter c

	last = NULL; // inicializamos a NULL
	uc = (unsigned char)c; // convertimos c a unsigned char
	while (*s) // recorremos la cadena
	{// mientras no lleguemos al final
		if ((unsigned char)*s == uc) // si encontramos el caracter
			last = s; // actualizamos last
		s++; // avanzamos en la cadena
	}
	if (uc == '\0') // si c es el caracter nulo
		return ((char *)s); // devolvemos el final de la cadena
	return ((char *)last); // devolvemos la ultima aparicion o NULL
}

/*#include <stdio.h>
int main (void)
{	const char *desfile;
	desfile = "Esto es una pasarela";
	int modelo;
	modelo = 'e';
	char *foto;
	foto = ft_strrchr (desfile, modelo);
	printf("ultimo sitio donde esta la modelo es %p, (hexadecimal)\n", foto);
	printf("ultimo sitio donde esta la modelo es %s, (cadena)\n", foto);
}*/