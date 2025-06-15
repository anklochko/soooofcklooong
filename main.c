/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:46:20 by anastasiya        #+#    #+#             */
/*   Updated: 2025/06/10 17:32:53 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Напиши main.c, который просто считывает карту в char**
//Подключи MiniLibX и отобрази каждый символ картинкой на экране
//Реализуй двuжение по клавишам: WASD или стрелки
//Добавь счётчик ходов в консоль
//create a window using MiniLibX
//Create the required structure to store all the necessary information

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_map	map;

	if (argc != 2)
		return (ft_putstr_fd("Usage: ./so_long map.ber\n", 2), 1);
	if (!parse_map(argv[1]))
		return (1);

	// Вывести карту
	for (int i = 0; i < map.cols; i++)
		ft_printf("%s", map.map[i]);

	// Очистка
	for (int i = 0; i < map.cols; i++)
		free(map.map[i]);
	free(map.map);

	return (0);
}

