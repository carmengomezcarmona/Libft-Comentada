/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:41:40 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:38:32 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// la función ft_putnbr_fd escribe el número entero 'n' en el descriptor de archivo 'fd'.
void	ft_putnbr_fd(int n, int fd) // Función para escribir un número entero en un descriptor de archivo
{
	long	num; // Usamos long para manejar el caso de INT_MIN

	num = n; // Convertimos n a long para evitar overflow
	if (num < 0) // Si el número es negativo
	{
		ft_putchar_fd ('-', fd); // Escribimos el signo negativo
		num = -num; // Convertimos el número a positivo
	}
	if (num >= 10) // Si el número tiene más de un dígito
	{
		ft_putnbr_fd (num / 10, fd); // Llamada recursiva para escribir los dígitos anteriores
	}
	ft_putchar_fd((num % 10) + '0', fd); // Escribimos el dígito actual
}

/*
#include <stdio.h>   // solo para printf
#include <unistd.h>  // para STDOUT_FILENO
int main(void)
{
    int numero;

    numero = 12345;
    printf("Imprimiendo el número %d usando ft_putnbr_fd en pantalla:\n", numero);
    ft_putnbr_fd(numero, 1); // 1 es el file descriptor de stdout
    ft_putnbr_fd(-987, 1);   // probamos un número negativo
    ft_putnbr_fd(0, 1);      // probamos cero
    write(1, "\n", 1);       // para saltar de línea al final

    return 0;
}
*/