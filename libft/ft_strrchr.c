/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:12:05 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/22 22:44:02 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}

// int	main(void)
// {
// 	const char *str = "Hello!";
// 	char *result;

// 	result = ft_strchr(str, 'l');
// 	if (result)
// 		printf("%ld\n", result - str);
// 	else
// 		printf("'l' niema \n");
// }