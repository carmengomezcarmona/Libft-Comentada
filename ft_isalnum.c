/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:33:55 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 21:45:19 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// comprueba si el caracter es alfanumérico, podemos usar las funciones ft_isalpha e ft_isdigit
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int caracter;
    caracter = 'a';
    int resultado;
    resultado = ft_isalnum(caracter);
    printf("¿Es '%c' un carácter alfanumérico? (1=Sí, 0=No): %d\n", caracter, resultado);

    caracter = '5';
    resultado = ft_isalnum(caracter);
    printf("¿Es '%c' un carácter alfanumérico? (1=Sí, 0=No): %d\n", caracter, resultado);

    caracter = '#';
    resultado = ft_isalnum(caracter);
    printf("¿Es '%c' un carácter alfanumérico? (1=Sí, 0=No): %d\n", caracter, resultado);

    return (0);
}
*/