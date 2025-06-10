/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:46:20 by anastasiya        #+#    #+#             */
/*   Updated: 2025/06/10 16:41:02 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Напиши main.c, который просто считывает карту в char**
//Подключи MiniLibX и отобрази каждый символ картинкой на экране
//Реализуй двuжение по клавишам: WASD или стрелки
//Добавь счётчик ходов в консоль
//create a window using MiniLibX
//Create the required structure to store all the necessary information

// int main()
// {
//     void *mlx = mlx_init();
//     void *win = mlx_new_window(mlx, 640, 360, "Tutorial Window");
//     mlx_loop(mlx);
//     return 0;
// }

// void mlx_new_window(void *mlx_ptr, int x, int y, char *name)
// {
//     void *mlx = mlx_init();
//     if(mlx == NULL)
//         return 1;
    
// }

#include "../include/so_long.h"
#include "../include/so_long.h"

int main(int argc, char **argv)
{
    t_game game;
    if (argc != 2)
        exit_error(INVALID_NBR_ARGS "\n");
    parse_map(argv[1], &game.map);
    validate_map(&game.map);

    game.mlx = mlx_init();
    if (!game.mlx)
        exit_error(MLX_INIT_ERR "\n");
    game.win = mlx_new_window(
        game.mlx,
        game.map.cols * IMG_SIZE,
        game.map.rows * IMG_SIZE,
        "so_long");
    if (!game.win)
        exit_error(MLX_NEW_WINDOW_ERR "\n");
    init_assets(&game);
    render_map(&game);

    mlx_key_hook(game.win, key_hook, &game);
    mlx_hook    (game.win, 17, 0, close_hook, &game);
    mlx_loop(game.mlx);
    return (0);
}
