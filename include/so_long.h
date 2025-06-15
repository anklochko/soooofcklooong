/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:06:40 by anastasiya        #+#    #+#             */
/*   Updated: 2025/06/15 12:29:25 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "asset.h"
#include "keys.h"
#include "error_msg.h"
#include <fcntl.h>
#include "get_next_line.h"
#include "libft.h"
#include "../mlx/mlx.h"
#include "../ft_printf/ft_printf.h"

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
    char    **map;  //type grid? то есть массив строк где каждая строка это одна строка карты      
    int     rows;
    int     cols;	
    int     collectibles;
    t_point exit;
    int     player;
    t_point player_pos;
    char	        *str; // тут начинается временное хранение карты, строка карты
	int		        index;	 // ее нр
	struct s_map	*next; // ну и типа поинтер к след линкед листу? хотя блин это можно тут делать или нет?
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
static void exit_error(const char *msg);
int parse_map(const char *file_path);

#endif