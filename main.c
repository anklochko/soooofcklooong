/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:46:20 by anastasiya        #+#    #+#             */
/*   Updated: 2025/05/25 10:41:06 by anastasiya       ###   ########.fr       */
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

#include "so_long"

int main(int argc, char **argv)
{
    t_game game;

    // … твоя валидация аргументов, чтение карты …

    game.mlx = mlx_init();
    if (!game.mlx)
        exit_error(MLX_INIT_ERR "\n");
    game.win = mlx_new_window(
        game.mlx,
        game.map.cols * IMG_SIZE,
        game.map.rows * IMG_SIZE,
        "so_long"
    );
    mlx_pixel_put(game.mlx, game.win, 0, 0, 0x00FF00);      // зелёная точка в (0,0)
    mlx_pixel_put(game.mlx, game.win, IMG_SIZE, IMG_SIZE, 0xFF0000); // красная в (64,64)

    if (!game.win)
        exit_error(MLX_NEW_WINDOW_ERR "\n");

    // тестируем пиксель — если точка на месте, значит MLX OK
    mlx_pixel_put(game.mlx, game.win, 0, 0, 0x00FF00);
    mlx_pixel_put(game.mlx, game.win, IMG_SIZE, IMG_SIZE, 0xFF0000);

    init_assets(game.mlx, &game);
    render_map(&game);

    // … хуки и цикл
    mlx_hook(game.win, 2, 1L<<0, key_hook, &game);
    mlx_hook(game.win, 17, 1L<<17, close_hook, &game);
    mlx_loop(game.mlx);
    return (0);
}
