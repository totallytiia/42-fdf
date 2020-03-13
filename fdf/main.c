/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaukkan <tlaukkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:14:19 by tlaukkan          #+#    #+#             */
/*   Updated: 2020/03/06 16:15:29 by tlaukkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

int     draw_line(void *mlx, void *win, int beginx, int beginy, int endx, int endy, int color)
{
	double deltaX = endx - beginx;
	double deltaY = endy - beginy;

	int pixels = sqrt((deltaX * deltaX) + (deltaY * deltaY));

	deltaY /= pixels;
	deltaX /= pixels;

	double pixelX = beginx;
	double pixelY = beginy;
	while (pixels)
	{
		mlx_pixel_put(mlx, win, pixelX, pixelY, color);
		pixelX += deltaX;
		pixelY += deltaY;
		--pixels;
	}
}

int main()
{
	void *mlx;
	void *win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 640, 360, "window");
	draw_line(mlx, win, 640, 360, 0, 0, 0xFFFFFF);
	
	mlx_loop(mlx);

}