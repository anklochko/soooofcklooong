/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 21:18:29 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/23 21:33:58 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end - 1]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}

// char	*ft_strtrim(const char *s1, const char *set)
// {
// 	int		start;
// 	char	*result;
// 	int		i;
// 	int		end;
// 	int		len;

// 	start = 0;
// 	end = ft_strlen(s1) - 1;
// 	if (!s1 || !set)
// 		return (NULL);
// 	while (s1[start] && ft_strchr(set, s1[start]))
// 		start++;
// 	while (end > start && ft_strchr(set, s1[end]))
// 		end--;
// 	len = end - start + 1;
// 	if (len <= 0)
// 		return (ft_strdup(""));
// 	result = (char *)malloc(len + 1);
// 	if (!result)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 		result[i++] = s1[start++];
// 	result[i] = '\0';
// 	return (result);
// }