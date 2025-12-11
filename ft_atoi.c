/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:23:12 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:32:48 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//convierte una cadena de caracteres a un entero
int	ft_atoi(const char *nptr) //cadena de caracteres a convertir
{
	int	i;
	int	sign; //signo del numero
	int	num; //numero resultante

	i = 0; 
	sign = 1; //por defecto es positivo
	num = 0; //inicializamos el numero a 0
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32) //si hay espacios en blanco
		i++; //avanzamos el indice
	if (nptr[i] == '+' || nptr[i] == '-') //si hay un signo
	{
		if (nptr[i] == '-') //si es negativo
			sign = -1; //cambiamos el signo
		i++; //avanzamos el indice
	}
	while (nptr[i] >= '0' && nptr[i] <= '9') //mientras sean digitos
	{
		num = num * 10 + (nptr[i] - '0'); //convertimos el caracter a entero y lo sumamos al numero
		i++; //avanzamos el indice
	}
	return (sign * num); //devolvemos el numero con el signo correspondiente
}