/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_sprites2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:43:50 by clorcery          #+#    #+#             */
/*   Updated: 2022/06/24 17:13:45 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_d_close(t_vars *vars)
{
	vars->map_y = 0;
	while (vars->map_split[vars->map_y] != NULL)
	{
		vars->map_x = 0;
		while (vars->map_split[vars->map_y][vars->map_x])
		{
			if (vars->map_split[vars->map_y][vars->map_x] == 'E')
				mlx_put_image_to_window(vars->mlx, vars->win,
					vars->img.d_close, vars->map_x * 32, vars->map_y * 32);
			vars->map_x++;
		}
		vars->map_y++;
	}
}
