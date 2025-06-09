/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:06:40 by anastasiya        #+#    #+#             */
/*   Updated: 2025/05/25 12:17:27 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "asset.h"
#include "keys.h"
#include "error_msg.h"
#include "get_next_line.h"
#include "libft.h"
#include "../mlx/mlx.h"

# define OPEN_SPACE "0"
# define WALL "1"
# define PLAYER "P"
# define COLLECTIBLE "C"
# define EXIT "E"

# define MSGES

typedef struct  s_assets
{
    void    *wall;
    void    *background;
    void    *player;
    void    *coin;
    void    *exit;
    int     images_size;     
    int     img_w;
    int     img_h;
}               t_assets;

typedef struct  s_map
{
    char    **map;        
    int     rows;
    int     cols;
    int     collectibles;
    int     exit;
    int     player;
    t_point player_pos;
}               t_map;

typedef struct  s_game
{
    void    *mlx;
    void    *win;
	//void	game;
    t_assets assets;       
    t_map   map;          
    int     moves;         
}               t_game;

void init_assets(t_game *game);
void render_map(t_game *game);

#endif