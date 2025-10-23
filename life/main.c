/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fif <luis-fif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:33:26 by luis-fif          #+#    #+#             */
/*   Updated: 2025/09/15 13:49:59 by luis-fif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "life.h"

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);

    int		h;
    int		w;
    int		iter;
    t_cell	**board;
	int		y;
	int		x;
	int		pen;
	char	c;

    w =     atoi(argv[1]);
    h =     atoi(argv[2]);
    iter =	atoi(argv[3]);
    board =	init_board(w, h);

	y =		0;
	x =		0;
	pen =	0;
	
	while (read(0, &c, 1) == 1 && c != '\n')
	{
		if (c == 'w')
			y--;
		else if (c == 's')
			y++;
		else if (c == 'a')
			x--;
		else if (c == 'd')
			x++;
		else if (c == 'x')
			pen = !pen;
		if (pen && y >= 0 && y < h && x >= 0 && x < w)
		{
			board[y][x].now = 1;
		}
	}

	for (int i = 0; i < iter; i ++)
	{
		itenerations(board, w, h);
		change_boards(board, w, h);
	}
	print_board(board, w, h);

	free_board(board, w, h);
    return (0);
}
