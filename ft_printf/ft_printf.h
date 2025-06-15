/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:05:36 by anklochk          #+#    #+#             */
/*   Updated: 2025/03/16 17:48:42 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_print_specifiers(char charr, int *len, va_list args);
int		ft_printf(const char *str, ...);
void	ft_print_char(int *len, va_list args);
void	ft_print_str(int *len, va_list args);
void	ft_print_pointer(void *ptr, int *len);
void	ft_print_number(int n, int *len);
int		ft_putbase16(unsigned long num, char *base);
void	ft_print_unumber(unsigned int n, int *len);

#endif