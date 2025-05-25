/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:58:34 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/23 20:42:46 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*str;
	unsigned int	lenght;

	if (!s)
		return (NULL);
	lenght = ft_strlen(s);
	if (start >= lenght)
		return (ft_calloc(1, sizeof(char)));
	if (start + len > lenght)
		len = lenght - start;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
