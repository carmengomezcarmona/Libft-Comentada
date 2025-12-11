/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:33:55 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:34:56 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//la función ft_putchar_fd escribe el carácter 'c' en el descriptor de archivo 'fd'.
void	ft_putchar_fd(char c, int fd) //escribe el carácter 'c' en el descriptor de archivo 'fd'.
{
	write (fd, &c, 1); //escribe el carácter 'c' en el descriptor de archivo 'fd'.
}

/*
#include <unistd.h>

int main(void)
{
    ft_putchar_fd('A', 1); //escribe el carácter 'A' en el descriptor de archivo 1 (stdout).
    ft_putchar_fd('\n', 1); //escribe un salto de línea en el descriptor de archivo 1 (stdout).

    ft_putchar_fd('B', 2); //escribe el carácter 'B' en el descriptor de archivo 2 (stderr).
    ft_putchar_fd('\n', 2); //escribe un salto de línea en el descriptor de archivo 2 (stderr).

    return (0);
}*/
/*Un file descriptor (descriptor de archivo) es, básicamente, un número entero que el sistema operativo 
asigna a cada archivo, dispositivo o flujo abierto que un programa puede usar para leer o escribir. 
Es como un "identificador" que el SO usa internamente para saber a qué archivo estás accediendo.
En C, los file descriptors se usan sobre todo con las funciones de bajo nivel (read, write, open, close). Por ejemplo:
Descriptor	Uso típico
0	stdin (entrada estándar, normalmente teclado)
1	stdout (salida estándar, normalmente pantalla)
2	stderr (salida de errores, normalmente pantalla)
Por eso en funciones como ft_putchar_fd o ft_putstr_fd, pasas un file descriptor para indicar dónde quieres enviar la salida:
ft_putchar_fd('A', 1); // Imprime 'A' en la pantalla (stdout)
ft_putstr_fd("Hola\n", 2); // Envía "Hola" a la salida de errores (stderr)*/