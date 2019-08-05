/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorold- <dgorold-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:19:10 by dgorold-          #+#    #+#             */
/*   Updated: 2019/08/05 19:23:39 by dgorold-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_FRACTOL_H
# define FRACTOL_FRACTOL_H
# include "../libft/includes/libft.h"
# include "/usr/local/include/mlx.h"
# include "fcntl.h"
# include "math.h"
# include "pthread.h"
# include "stdio.h"
# define THREADS 4
# define WIDTH 1000
# define HEIGHT 1000

typedef struct s_image
{
	void		*img_pntr;
	char		*data;
	int			s_l; // size line
	int         bpp;
	int			endian;

}				t_image;

typedef struct	s_color
{
	char 		b;
	char 		g;
	char 		r;
}				t_color;

typedef struct	s_mouse
{
	float 		prev_x;
	float 		prev_y;
	float 		hld_x;
	float 		hld_y;
	float		movex;
	float		movey;
	int 		stopmove;
}				t_mouse;

typedef struct	s_fractol
{
	float		zoom;
	char 		*file;
	float 		step;
	int 		max_iter;
//	char		*image_data;
	void		*mlx_ptr;
	void		*win_ptr;
	float		factor;
	int			width;
	int			height;
	struct s_thread	*name;
	t_mouse		ms;
	t_image		img;
}				t_fcl;

typedef struct	s_thread
{
	int 		index;
	pthread_t 	point;
	t_fcl		*foo0;
}				t_thread;

#endif //FRACTOL_FRACTOL_H
