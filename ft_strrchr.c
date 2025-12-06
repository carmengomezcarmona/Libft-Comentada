/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:58:27 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/06 13:56:13 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last;
	unsigned char	uc;

	last = NULL;
	uc = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == uc)
			last = s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return ((char *)last);
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