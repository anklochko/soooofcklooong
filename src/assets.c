/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assets.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:53:47 by anastasiya        #+#    #+#             */
/*   Updated: 2025/06/10 16:32:01 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"
#include <stdlib.h>  //exit

static void exit_error(const char *msg) //вывод ошибки в 1 или 0 завершить программу
{
    write(STDERR_FILENO, msg, ft_strlen(msg));
    exit(EXIT_FAILURE);
}
/*          init_assets              в .h файле game — это указатель на t_game.
why  assets.images?     -->     1) у нас есть тип данных в функции t_game 
                                2) в самой структуре t_gama есть assets типа t_assets
                                3) потом мы передает поинтер к другим вещам те wall, floor, back itd
                                «init_assets получает указатель на t_game. В t_game есть поле assets типа t_assets. Внутри init_assets мы через этот указатель инициализируем все поля текстур — wall, background, player и т. д.»
*/
void    init_assets(t_game *game)
{
    int *w = &game->assets.img_w;
    int *h = &game->assets.img_h;
    
    game->assets.wall        =  mlx_xpm_file_to_image(game->mlx, WALL_IMG, w, h);
    if (!game->assets.wall || *w == 0 || *h == 0) 
        exit_error(WALL_XPM_ERR "\n");
    game->assets.background  =  mlx_xpm_file_to_image(game->mlx, BACKGROUND_IMG, w, h);
    if (!game->assets.background || *w == 0 || *h == 0)
        exit_error(BACKGROUND_XPM_ERR "\n");
    game->assets.player      =  mlx_xpm_file_to_image(game->mlx, PLAYER_IMG, w, h);
    if (!game->assets.player || *w == 0 || *h == 0)
        exit_error(PLAYER_XPM_ERR "\n");
    game->assets.coin        =  mlx_xpm_file_to_image(game->mlx, COIN_IMG, w, h);
    if (!game->assets.coin || *w == 0 || *h == 0)
        exit_error(COIN_XPM_ERR "\n");
    game->assets.exit        =  mlx_xpm_file_to_image(game->mlx, EXIT_IMG, w, h);
    if (!game->assets.exit || *w == 0 || *h == 0)
        exit_error(EXIT_XPM_ERR "\n");
    printf("Sprite wall: %d×%d\n", *w, *h);
    game->assets.images_size =  IMG_SIZE;
}
