/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:27:28 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/02 10:34:44 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
    if (s)
    {
        ft_putstr_fd(s, fd);
        ft_putchar_fd('\n', fd);
    }
}

/*
int main(void)
{
    char str1[] = "Hola mundo!";
    char str2[] = "Esta es otra línea";
    char str3[] = "";

    ft_putendl_fd(str1, 1);
    ft_putendl_fd(str2, 1);
    ft_putendl_fd(str3, 1);

    return 0;
}*/