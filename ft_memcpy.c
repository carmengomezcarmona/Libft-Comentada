/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:33:21 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 21:41:07 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copia bytes de memoria sean lo q sean (char, int...)
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst; //casting puntero dest : cajitas vacías
	s = (unsigned char *)src; //casting puntero src : cajitas llenas con cosas
	i = 0;
	if (!dst && !src) //si no existen las cajas: nulo
		return (NULL);
	while (i < n) // mientras i sea menor q el numero de bytes q tengo q copiar (n)
	{
		d[i] = s[i]; //copia src a dst
		i++;
	}
	return (dst); //devuelve el puntero al destino (la direccion del destino)
}
/*
#include <string.h> // Para usar memcpy 
#include <stdio.h>  // Para usar printf
int main (void)
{
    // 1. EL ORIGEN (caja llena)
    char cajaorigen[] = "Es lo que hay";
    // 2. LA CANTIDAD DE BYTES Q COPIAR
    size_t acopiar;
    acopiar = 8;
    // 3. EL DESTINO (Donde vamos a pegar, LA CAJA VACÍA)Le damos espacio de sobra para no chocar
    char destino[50];
    // 4. EL RESULTADO (Tiene que ser puntero *)
    char *resultado; 
    // 5. LA LLAMADA (Destino PRIMERO, Origen SEGUNDO)
    // "Copia EN destino DESDE cajaorigen"
    resultado = memcpy(destino, cajaorigen, acopiar);
    printf("%s (visual) \n", resultado);
    printf("%p (puntero) \n", resultado); //cuando lo q devuelve es un puntero %p la direccion
    return (0);
}
Al compilar: 
Es lo qu (visual) 
0x7ffe083991c0 (puntero) 
*/