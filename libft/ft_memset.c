/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:32:58 by anklochk          #+#    #+#             */
/*   Updated: 2024/12/22 17:19:40 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <unistd.h>
//#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = s;
	while (n > 0)
	{
		*temp = (unsigned char)c;
		temp++;
		n--;
	}
	return (s);
}

/*
int	main(void)
{
	char b[] = "string";

	ft_memset(b, 'f', 3);

	char *ptr = b;
	while (*ptr != '\0')
	{
		write(1, ptr, 1);
		ptr++;
	}
	return (0);
}*/