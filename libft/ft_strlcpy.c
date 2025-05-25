/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:50:13 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/23 17:49:27 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (src == NULL)
		return (0);
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (size - 1 > i && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
