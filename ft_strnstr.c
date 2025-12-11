/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:50:00 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 00:00:28 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Busca la primera aparición de la cadena 'little' en los primeros 'n' caracteres de 'big'.
// Devuelve un puntero a la primera aparición o NULL si no se encuentra.
char	*ft_strnstr(const char *big, const char *little, size_t n) 
{
	size_t	i;
	size_t	j;

	if (*little == '\0') // Si 'little' es una cadena vacía, devuelve 'big'.
		return ((char *)big); //casting para evitar advertencias de const
	i = 0; // Índice para recorrer 'big'.
	while (i < n && big[i] != '\0') // Recorre 'big' hasta 'n' o hasta el final de la cadena.
	{
		if (big[i] == little[0]) // Si el carácter actual coincide con el primer carácter de 'little'.
		{
			j = 0;	// Índice para recorrer 'little'.
			// Compara los caracteres de 'little' con los de 'big' mientras coincidan y no se exceda 'n'.
			while (i + j < n && big[i + j] == little[j] && little[j] != '\0') // Evita desbordamientos y compara caracteres.
				j++; // Avanza en 'little'.
			// Si se ha llegado al final de 'little', se ha encontrado una coincidencia
			if (little [j] == '\0') // Si se ha recorrido toda 'little', se encontró una coincidencia completa.
				return ((char *)(big + i)); // Devuelve un puntero a la posición en 'big' donde comienza la coincidencia.
		}
		i++; // Avanza en 'big'.
	}
	return (NULL); // Si no se encuentra 'little' en 'big' dentro de los primeros 'n' caracteres, devuelve NULL.
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *big = "Hola42 en 42 Málaga";
    const char *little = "42";
    size_t n = 10; // solo buscamos en los primeros 10 caracteres
    char *resultado;

    // Buscamos 'little' dentro de 'big' en los primeros n caracteres
    resultado = ft_strnstr(big, little, n);

    if (resultado)
        printf("Encontrado '%s' en '%.*s': empieza en '%s'\n",
               little, (int)n, big, resultado);
    else
        printf("No se encontró '%s' en los primeros %zu caracteres de '%s'\n",
               little, n, big);

    return 0;
}
*/