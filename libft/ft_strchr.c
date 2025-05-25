/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:25:12 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/22 21:13:26 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	const char *str = "Hello, world!";
// 	char *result;

// 	result = ft_strchr(str, 'w');
// 	if (result)
// 		printf("%ld\n", result - str);
// 	else
// 		printf("'w' not found\n");
// }