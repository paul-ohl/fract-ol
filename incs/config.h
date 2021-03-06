/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:03:23 by pohl              #+#    #+#             */
/*   Updated: 2021/09/28 16:08:55 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_H
# define CONFIG_H

# include "useful_structs.h"
# include <complex.h>
# include <stdbool.h>

# define ESCAPE_VALUE 2
# define COLOR_BLACK 0x00000000
# define COLOR_WHITE 0xffffff00

enum	e_algorithm_type
{
	MANDELBROT = 0,
	JULIA,
	BURNING_SHIP,
	BURNING_JULIA,
	INVERSE_MANDELBROT,
	GLYNN,
};

typedef struct s_image_info
{
	void		*img_ptr;
	int			*data;
	t_ivect2	size;
	int			size_line;
	int			endian;
	int			img_depth;
}	t_image_info;

typedef struct s_world_screen
{
	t_dvect2	origin;
	double		width;
	double		height;
}	t_world_screen;

typedef struct s_mlx_params
{
	void	*mlx_ptr;
	void	*win_ptr;
}	t_mlx_params;

typedef struct s_algorithm
{
	double complex	julia_constant;
	int				max_iteration;
	int				type;
}	t_algorithm;

typedef struct s_config
{
	t_mlx_params	mlx;
	t_image_info	img;
	t_image_info	hud;
	t_algorithm		algo;
	t_world_screen	wscreen;
	bool			is_shift_pressed;
	bool			display_hud;
}	t_config;

#endif
