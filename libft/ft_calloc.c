/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:07:42 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/23 18:27:45 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	mem;
	void	*tmp;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	mem = nmemb * size;
	tmp = malloc(mem);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, mem);
	return (tmp);
}
// void	*tmp; // pointer to allocated memory
