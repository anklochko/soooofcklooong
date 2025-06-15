/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_specifiers2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:57:50 by anklochk          #+#    #+#             */
/*   Updated: 2025/03/17 16:58:48 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unumber(unsigned int n, int *len);
void	ft_print_number(int n, int *len);

void	ft_print_unumber(unsigned int n, int *len)
{
	char	str[12];
	int		i;

	i = 10;
	if (n == 0)
	{
		*len += write(1, "0", 1);
		return ;
	}
	str[11] = '\0';
	while (n)
	{
		str[i--] = (n % 10) + 48;
		n /= 10;
	}
	*len += write(1, &str[i + 1], 10 - i);
	return ;
}

void	ft_print_number(int n, int *len)
{
	char	str[12];
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		*len += write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		*len += write(1, "-", 1);
		n = -n;
	}
	while (n || i == 0)
	{
		str[i++] = '0' + n % 10;
		n /= 10;
	}
	while (i--)
		*len += write(1, &str[i], 1);
}
