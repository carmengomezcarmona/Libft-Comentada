/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:43:45 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 00:23:37 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//comprobar si el caracter es ascii
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int c;

    c = 'A';
    printf("¿'%c' es ASCII? %d\n", c, ft_isascii(c));

    c = 200;
    printf("¿'%d' es ASCII? %d\n", c, ft_isascii(c));

    c = '\n';
    printf("¿newline es ASCII? %d\n", ft_isascii(c));

    return 0;
}*/