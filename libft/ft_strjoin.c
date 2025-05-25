/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:43:19 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/23 20:54:14 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}

// int main(void)
// {
//     const char *str1 = "Helldddo, ";
//     const char *str2 = "wordld!";

//     char *result = ft_strjoin(str1, str2);

//     if (result)
//     {
//         printf("Объединённая строка: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Ошибка\n");
//     }

//     return (0);
// }