/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:46:40 by anastasiya        #+#    #+#             */
/*   Updated: 2025/06/15 12:32:56 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// содержит ли карта одного игрока, один вызход и являетсся ли она валидной 
// читает файл построчно через get_next_line

static int	check_line_length(t_list *lst, int *width)
{

}


int parse_map(const char *file_path);
{
    int	fd
    int line;
    fd = open(file_path, O_RDONLY);
    if(fd < 0)
        exit_error(OPEN_MAP_FILE_ERR "\n");
    
    line = get_next_line(fd);
    
    while(!line)
    {
        read map
    }
}