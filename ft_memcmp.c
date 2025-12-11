/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:49:28 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 00:34:16 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//la función memcmp compara los primeros n bytes de las áreas de memoria s1 y s2.
int	ft_memcmp(const void *s1, const void *s2, size_t n) //compara dos bloques de memoria hasta n bytes
{
	unsigned char	*p1; //punteros a los bloques de memoria
	unsigned char	*p2; //punteros a los bloques de memoria
	size_t			i; //contador

	p1 = (unsigned char *)s1; //puntero al primer bloque de memoria
	p2 = (unsigned char *)s2; //puntero al segundo bloque de memoria
	i = 0;
	while (i < n) //bucle que recorre los bloques de memoria hasta n bytes
	{
		if (p1[i] != p2[i]) //si los bytes son diferentes
			return ((p1[i] - p2[i])); //devuelve la diferencia entre los bytes
		i++;//incrementa el contador
	}
	return (0); //si son iguales devuelve 0
}
/*
#include <stdio.h>

int main(void)
{
    char s1[] = "Hola mundo";
    char s2[] = "Hola Mundo"; // Diferencia en la 'M' mayúscula
    size_t n = 10;            // Comparar los primeros 10 bytes
    int resultado;

    resultado = ft_memcmp(s1, s2, n);

    if (resultado == 0)
        printf("Los primeros %zu bytes son iguales\n", n);
    else if (resultado < 0)
        printf("s1 es menor que s2 en la comparación de los primeros %zu bytes\n", n);
    else
        printf("s1 es mayor que s2 en la comparación de los primeros %zu bytes\n", n);

    return 0;
}*/