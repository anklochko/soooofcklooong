/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:46:20 by anastasiya        #+#    #+#             */
/*   Updated: 2025/05/22 16:59:33 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Напиши main.c, который просто считывает карту в char**
//Подключи MiniLibX и отобрази каждый символ картинкой на экране
//Реализуй двuжение по клавишам: WASD или стрелки
//Добавь счётчик ходов в консоль


//create a window using MiniLibX
//Create the required structure to store all the necessary information



int main()
{
    void *mlx = mlx_init();
    void *win = mlx_new_window(mlx, 640, 360, "Tutorial Window");
    mlx_loop(mlx);
    return 0;
}

void mlx_new_window(void *mlx_ptr, int x, int y, char *name)
{
    void *mlx = mlx_init();
    if(mlx == NULL)
        return 1;
    
}