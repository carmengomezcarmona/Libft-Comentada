/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:12:05 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 21:43:48 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Comprueba si el carácter es una letra del alfabeto (mayúscula o minúscula)
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
    resultado = ft_isalpha(caracter);
    printf("¿Es '%c' una letra? (1=Sí, 0=No): %d\n", caracter, resultado);

    caracter = '5';
    resultado = ft_isalpha(caracter);
    printf("¿Es '%c' una letra? (1=Sí, 0=No): %d\n", caracter, resultado);
    return (0);
}
*/