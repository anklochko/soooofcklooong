/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 21:40:18 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/23 20:21:04 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*data;

	len = ft_strlen(s);
	data = malloc(len + 1);
	if (!data)
		return (NULL);
	ft_memcpy(data, s, len + 1);
	return (data);
}

// int main(void)
// {
//     const char *original = "He llo, Wor   ld!";

//     char *duplicate = strdup(original);
//     if (duplicate == NULL) {
//         printf("failed!\n");
//         return (1);
//     }

//     printf("Original: %s\n", original);
//     printf("Duplicate: %s\n", duplicate);

//     free(duplicate);

//     return (0);
// }