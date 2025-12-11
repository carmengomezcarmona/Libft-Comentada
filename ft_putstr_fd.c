/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:25:24 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:39:57 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// esta funcion escribe la cadena 's' en el file descriptor 'fd'
void	ft_putstr_fd(char *s, int fd) // recibe una cadena y un file descriptor
{
	int	i;

	if (!s) // si la cadena es NULL
		return ; //q
	i = 0; // inicializa el indice
	while (s[i]) // mientras no sea el final de la cadena
	{
		ft_putchar_fd (s[i], fd); // llama a ft_putchar_fd para escribir cada caracter
		i++; // incrementa el indice
	}
}
 /*
 #include <stdio.h>   // solo para printf
#include <unistd.h>  // para STDOUT_FILENO
int main(void)
{
    char *mensaje;

    mensaje = "Hola, esto es un mensaje usando ft_putstr_fd!\n";
    printf("Mostrando el mensaje en pantalla:\n");
    ft_putstr_fd(mensaje, 1); // 1 es el file descriptor de stdout

    mensaje = "Otro mensaje para probar con ft_putstr_fd.\n";
    ft_putstr_fd(mensaje, 1);

    return 0;
}
 */