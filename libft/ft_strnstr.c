/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:56:58 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/22 21:13:41 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;

	little_len = 0;
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (little[little_len] != '\0')
		little_len++;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0'
			&& little[j] != '\0' && i + j < len)
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *haystack = "12345";
// 	const char *needle = "5";
// 	size_t len = 5;

// 	printf("'%s' found\n", ft_strnstr(haystack, needle, len));
// 	return (0);
// }

// while (little[little_len] != '\0') // вычисляем дл стр литл
// if (!little[j]) //Если мы дошли до конца little,значит нашли совпадение