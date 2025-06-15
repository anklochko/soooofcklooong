/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:32:25 by anastasiya        #+#    #+#             */
/*   Updated: 2025/06/15 12:33:15 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void process_char(t_game *game, char c, int *i, int *j)
{
    game->map.map[*i][*j] == c;
    if(c == 'P')
    {
        game->map.player_pos.x = j;
        game->map.player_pos.y = i;
    }
    else if (c == 'C')
    {
        game->map.collectibles++;
    }
    else if(c == 'E')
    {
        game->map.exit.x = j;
        game->map.exit.y = i;
    }
    
}
static void	process_line_char(t_game *game, char c, int *i, int *j)
{
    if(c == '\n')
    {
        game->map.map[*i][*j] == '\0';
        (*i++);
        j++;
    }
    else
    {
        process_char(game, c, i, j);
        (*j++); //why?
    }
}