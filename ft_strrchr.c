/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:58:27 by carmgome          #+#    #+#             */
/*   Updated: 2025/11/25 13:01:52 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(char *s, int c)
{
	char *ultima_posicion = NULL;

	while (*s != '\0')
	{
		if (*s == c)
			ultima_posicion = s;
		s++;
	}
	if (*s == c)
		ultima_posicion= s;
	return (ultima_posicion)
}

