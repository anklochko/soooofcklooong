/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:58:59 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/12 13:44:56 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer;

	pointer = (unsigned char *)s;
	while (n--)
	{
		if (*pointer == (unsigned char)c)
			return (pointer);
		pointer++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main() {
//     char data[] = { 'A', 'B', 'C', 'D', 'E' };
//     char *result = ft_memchr(data, 'C', 5);

//     if (result)
//         printf("%c\n", *result);
//     else
//         printf("Brak\n");

//     return (0);
// } 
	// pointer = (unsigned char *)s;
	// //Wskaźnik do obszaru pamięci

	// return (pointer);// Zwróć wskaźnik na znaleziony bajt