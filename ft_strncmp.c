/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:03:19 by carmgome          #+#    #+#             */
/*   Updated: 2025/11/25 13:03:28 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;

	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] !=  s2[i])
		       return ((unsigned char)s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return ((unsigned char)s1[i] - s2[i]);
	return (0);
}

