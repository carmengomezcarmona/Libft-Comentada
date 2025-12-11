/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:14:26 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 00:25:00 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//comprobar si el caracter es imprimible
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    int c;

    c = 'A';
    printf("¿'%c' se puede imprimir? %d\n", c, ft_isprint(c));

    c = '\n';
    printf("¿newline se puede imprimir? %d\n", ft_isprint(c));

    c = 127;
    printf("¿127 se puede imprimir? %d\n", ft_isprint(c));

    return 0;
}
*/