/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:27:28 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:35:49 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// la función ft_putendl_fd escribe la cadena de caracteres 's' en el descriptor de archivo 'fd',
// seguida de un salto de línea.
void	ft_putendl_fd(char *s, int fd) // escribe la cadena 's' seguida de un salto de línea en el descriptor 'fd'
{
	if (s) // verifica que la cadena no sea NULL
	{
		ft_putstr_fd (s, fd); // escribe la cadena 's' en el descriptor 'fd'
		ft_putchar_fd ('\n', fd); // escribe un salto de línea en el descriptor 'fd'
	}
}

/*
int main(void)
{
    char str1[] = "Hola mundo!"; // cadena de prueba 1
    char str2[] = "Esta es otra línea"; // cadena de prueba 2
    char str3[] = ""; // cadena de prueba 3 (vacía)

    ft_putendl_fd(str1, 1); // escribe str1 seguido de un salto de línea en la salida estándar
    ft_putendl_fd(str2, 1); // escribe str2 seguido de un salto de línea en la salida estándar
    ft_putendl_fd(str3, 1); // escribe str3 (vacía) seguido de un salto de línea en la salida estándar

    return 0;
}*/
