/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 21:14:21 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/22 23:04:57 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	countable;

	countable = 0;
	if (n <= 0)
		countable++;
	n = -n;
	while (n)
	{
		n /= 10;
		countable++;
	}
	return (countable);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	len = count(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
		*result = '-';
	result[len] = '\0';
	while (n)
	{
		if (n > 0)
			result[--len] = n % 10 + '0';
		else
			result[--len] = n % 10 * -1 + '0';
		n /= 10;
	}
	return (result);
}
