/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:52:47 by anastasiya        #+#    #+#             */
/*   Updated: 2025/05/21 16:41:29 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYS_H
# define KEYS_H

#ifdef __APPLE__          
# define KEY_ESC    53
# define KEY_LEFT   123
# define KEY_RIGHT  124
# define KEY_UP     126
# define KEY_DOWN   125
# define KEY_A      0
# define KEY_S      1
# define KEY_D      2
# define KEY_W      13
#elif defined(__linux__) 
# include <X11/keysymdef.h>
# define KEY_ESC    65307
# define KEY_LEFT   65361  
# define KEY_RIGHT  65363
# define KEY_UP     65362
# define KEY_DOWN   65364
# define KEY_A      97
# define KEY_S      115
# define KEY_D      100
# define KEY_W      119
#endif 

typedef struct  s_point
{
    int x;
    int y;
}               t_point;

#endif