/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:46:28 by anastasiya        #+#    #+#             */
/*   Updated: 2025/05/25 10:33:19 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Статическая выбирает нужное изображение и рисует его
static void draw_pxl(t_game *game, int y, int x)
{
    void *img;
    char c = game->map.map[y][x];

    img = game->assets.background;
    if(c == '1')
        img = game->assets.wall;
    else if (c == 'P')
        img = game->assets.player;
    else if (c == 'C')
        img = game->assets.coin;
    else if (c == 'E')
        img = game->assets.exit;
    mlx_put_image_to_window(game->mlx, game->win, img, x * IMG_SIZE, y * IMG_SIZE);
}

void render_map(t_game *game)
{
    int y = 0;
    int x;
    while (y < game->map.rows)
    {
        x = 0;
        while(x < game->map.cols)
            draw_pxl(game, y, x++);
        y++;
    }
}
