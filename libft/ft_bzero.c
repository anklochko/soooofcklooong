/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 13:49:05 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/22 21:27:28 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Funkcja bzero() wypełnia pierwsze n bajtów obiektu 
//wskazywanego przez dst    zerami ( NUL ) bajtów.
//type casting

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*((unsigned char *)s) = 0;
		s++;
		n--;
	}
}

// void	ft_bzero(void *dst, size_t n)
// {
// 	unsigned char	*b;
// 	b = dst;
// 	while (n > 0)
// 	{
// 		*b = 0; // type casting
// 		b++;
// 		n--;
// 	}
// }

// int	main(void)
// {
// 	char a[] = "nobody";

// 	ft_bzero(a, 2);

// 	char *b = a;
// 	while (*b == '\0')
// 		b++;

// 	while (*b != '\0')
// 	{
// 		write(1, b, 1);
// 		b++;
// 	}
// 	return (0);
// }