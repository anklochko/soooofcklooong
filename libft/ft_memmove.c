/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:01:52 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/23 17:03:17 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src == NULL || dest == NULL)
		return (NULL);
	if (dest > src && dest < src + n)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
// dest > src — целевая область начинается после исходной области.
// dest < (src + n) — целевая область начинается до конца исходной области.
// Почему это нужно? Потому что мы не знаем исходный тип данных