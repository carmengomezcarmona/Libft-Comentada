/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:03:19 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:58:22 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Compara las primeras n bytes de las cadenas s1 y s2.
// Devuelve un valor entero menor, igual o mayor que cero si s1 es
// menor, igual o mayor que s2 respectivamente.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0) // Si n es 0, no se comparan caracteres
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i]) // Compara hasta n caracteres o hasta encontrar un '\0'
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i]) // Si son diferentes, devuelve la diferencia
			return ((unsigned char)s1[i] - (unsigned char)s2[i]); // Convierte a unsigned char para evitar problemas con caracteres negativos
		i++;
	}
	if (i < n) // Si se llegó al final de una cadena antes de n caracteres
		return ((unsigned char)s1[i] - (unsigned char)s2[i]); // Compara el carácter nulo con el siguiente carácter
	return (0);
}
/*#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *s1 = "Hola42";
    const char *s2 = "Hola21";
    size_t n = 4;  // número de caracteres a comparar
    int resultado;

    // Comparamos las primeras n letras de s1 y s2
    resultado = ft_strncmp(s1, s2, n);

    printf("Comparando '%.*s' con '%.*s' (primeros %zu caracteres): %d\n",
           (int)n, s1, (int)n, s2, n, resultado);

    // Interpretación simple:
    if (resultado == 0)
        printf("Son iguales en los primeros %zu caracteres.\n", n);
    else if (resultado > 0)
        printf("s1 es mayor que s2 en los primeros %zu caracteres.\n", n);
    else
        printf("s1 es menor que s2 en los primeros %zu caracteres.\n", n);

    return 0;
}
ft_strncmp devuelve:
0 → iguales
0 → s1 > s2 según código ASCII
<0 → s1 < s2 según código ASCII
Usamos %.*s para imprimir solo los primeros n caracteres de la cadena.*/