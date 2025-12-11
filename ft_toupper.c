/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:29:35 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 00:06:29 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// convierte una letra minuscula en mayuscula
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
    int c;

    c = 'a';
    printf("ft_toupper('%c') = '%c'\n", c, ft_toupper(c));

    c = 'Z';
    printf("ft_toupper('%c') = '%c'\n", c, ft_toupper(c));

    return 0;
}
*/