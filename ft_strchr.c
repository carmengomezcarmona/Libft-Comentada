/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:53:11 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/02 22:17:13 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	(unsigned char) c;
	while (*s)
	{
		if ((unsigned char)*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (NULL);
}

/*#include <stdio.h>
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
}*/
