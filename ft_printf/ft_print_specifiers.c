/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_specifiers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 14:56:40 by anklochk          #+#    #+#             */
/*   Updated: 2025/03/17 16:57:18 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_specifiers(char charr, int *len, va_list args)
{
	if (charr == 'c')
		ft_print_char(len, args);
	else if (charr == 's')
		ft_print_str(len, args);
	else if (charr == 'p')
		ft_print_pointer(va_arg(args, void *), len);
	else if (charr == 'd' || charr == 'i')
		ft_print_number(va_arg(args, int), len);
	else if (charr == 'u')
		ft_print_unumber(va_arg(args, unsigned int), len);
	else if (charr == 'x')
		*len += ft_putbase16(va_arg(args, unsigned int), "0123456789abcdef");
	else if (charr == 'X')
		*len += ft_putbase16(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (charr == '%')
		*len += write(1, "%", 1);
	return (0);
}

void	ft_print_char(int *len, va_list args)
{
	char	c;

	c = va_arg(args, int);
	*len += write(1, &c, 1);
}

void	ft_print_str(int *len, va_list args) //%s string
{
	char	*str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		*len += write(1, str, 1);
		str++;
	}
}

void	ft_print_pointer(void *ptr, int *len)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	if (ptr == NULL)
		*len += write(1, "(nil)", 5);
	else
	{
		*len += write(1, "0x", 2);
		*len += ft_putbase16(address, "0123456789abcdef");
	}
}

int	ft_putbase16(unsigned long num, char *base)
{
	char	buffer[20];
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (num == 0)
		return (write(1, "0", 1));
	while (num)
	{
		buffer[i++] = base[num % 16];
		num /= 16;
	}
	while (i--)
		len += write(1, &buffer[i], 1);
	return (len);
}
