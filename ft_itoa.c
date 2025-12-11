/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:38:37 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:31:15 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//convierte un entero a una cadena de caracteres
static int	get_len(long n) //funcion para obtener la longitud del numero
{
	int	len; //variable para la longitud

	len = 0;
	if (n <= 0) //si el numero es negativo o cero
		len++; //incrementa la longitud para el signo negativo o el cero	
	while (n != 0) //mientras el numero no sea cero
	{
		n /= 10; //divide el numero entre 10
		len++; //incrementa la longitud
	}
	return (len); //devuelve la longitud
}

char	*ft_itoa(int n) //funcion principal para convertir el entero a cadena
{
	long		num; //variable para el numero long para manejar el minimo entero
	int			len; //variable para la longitud
	char		*str; //puntero para la cadena resultante

	num = n;
	len = get_len(num); 
	str = malloc(len + 1); //reserva memoria para la cadena
	if (!str) //si no se pudo reservar memoria
		return (NULL); //	devuelve NULL
	str[len] = '\0'; //agrega el caracter nulo al final de la cadena
	if (n < 0) //si el numero es negativo
		num = -num; //convierte el numero a positivo
	if (n == 0) //si el numero es cero
		str[0] = '0'; //agrega '0' a la cadena
	while (num > 0) //mientras el numero sea mayor que cero
	{
		str[len - 1] = (num % 10) + '0';	//convierte el ultimo digito a caracter y lo agrega a la cadena
		num /= 10; //elimina el ultimo digito del numero
		len--; //decrementa la longitud
	}
	if (n < 0) //si el numero original era negativo
		str[0] = '-'; 	//agrega el signo negativo al inicio de la cadena
	return (str); //devuelve la cadena resultante
}

/*
#include <stdio.h>
#include <stdlib.h> // Para free y malloc

int main(void)
{
    int number;
	char *resultado;

	number = -12345;
	resultado = ft_itoa(number);
	printf("El número %d como string es: %s\n", number, resultado);
	free(resultado);
	
	number = 0;
	resultado = ft_itoa(number);
	printf("El número %d como string es: %s\n", number, resultado);
	free(resultado);

	number = -2147483648;
	resultado = ft_itoa(number);
	printf("El número %d como string es: %s\n", number, resultado);
	free(resultado);	

	return 0;
}*/