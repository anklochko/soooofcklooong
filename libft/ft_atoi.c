/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:26:16 by anklochk          #+#    #+#             */
/*   Updated: 2025/05/25 11:22:00 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// filepath: /Users/anastasiya/Documents/Code/soooofcklooong/libft/libft.h
#ifndef LIBFT_H
#define LIBFT_H

int	ft_atoi(const char *nptr);
int	ft_isdigit(int c);
// Add other function prototypes as needed

#endif

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
	{
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
