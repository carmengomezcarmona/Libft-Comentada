/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:33:55 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/01 20:51:17 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*#include <unistd.h>

int main(void)
{
    ft_putchar_fd('A', 1);  // debería imprimir A en pantalla
    ft_putchar_fd('\n', 1);

    ft_putchar_fd('B', 2);  // debería imprimir B como error
    ft_putchar_fd('\n', 2);

    return (0);
}*/