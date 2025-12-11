/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 17:35:25 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 00:02:26 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Elimina los caracteres especificados en 'set' del inicio y el final de la cadena 's1'.
char	*ft_strtrim(char const *s1, char const *set) // s1: cadena original, set: caracteres a eliminar
{
	size_t	start; // Indice de inicio para el recorte
	size_t	end; // Indice de fin para el recorte

	if (!s1 || !set) // Verifica si las cadenas son nulas
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start])) // Avanza el indice de inicio mientras los caracteres esten en 'set'
		start++; //	 Incrementa el indice de inicio
	end = ft_strlen(s1); // Establece el indice de fin al final de la cadena
	while (end > start && ft_strchr(set, s1[end - 1])) /// Retrocede el indice de fin mientras los caracteres esten en 'set'
		end--; // Decrementa el indice de fin
	return (ft_substr(s1, start, end - start));	 // Retorna la subcadena recortada
}

/*#include <stdio.h>
int main (void)
{
	const char *pan;
	pan = "...Soy el sandwich...";
	const char *corte;
	corte = ".";
	char *resultado;
	resultado = ft_strtrim (pan, corte);
	printf("El corte es: %s\n", resultado);
	return (0);
}*/
