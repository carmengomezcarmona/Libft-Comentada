/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:30:10 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 21:42:59 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Comprueba si el carácter es un dígito numerico (0-9)
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
	int numero;
	numero = '8';
	int resultado;
	resultado = ft_isdigit(numero);
	printf("¿Es '%c' un dígito? (1=Sí, 0=No): %d\n", numero, resultado);

	numero = 'a';
	resultado = ft_isdigit(numero);
	printf("¿Es '%c' un dígito? (1=Sí, 0=No): %d\n", numero, resultado);
	return (0);
}
*/