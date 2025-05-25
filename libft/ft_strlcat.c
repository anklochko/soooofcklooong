/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:59:20 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/22 21:34:43 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	const char	*s;
	size_t		dest_len;
	size_t		total_len;

	if ((!dest || !src) && !n)
		return (0);
	s = src;
	dest_len = 0;
	while (*(dest + dest_len) && dest_len < n)
		dest_len++;
	if (dest_len < n)
		total_len = dest_len + str_len(s);
	else
		return (n + str_len(s));
	while (*s && (dest_len + 1) < n)
	{
		*(dest + dest_len) = *s++;
		dest_len++;
	}
	*(dest + dest_len) = '\0';
	return (total_len);
}
/* if dstsize is big enough to accomodate both src and dst */
/* concatenate src at the end of dst */
/* else, concatenate dstsize character maximum */