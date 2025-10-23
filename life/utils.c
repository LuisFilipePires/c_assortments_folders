/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fif <luis-fif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:36:16 by luis-fif          #+#    #+#             */
/*   Updated: 2025/09/10 14:17:28 by luis-fif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "life.h"

t_cell  **init_board(int w, int h)
{
    t_cell **board;

    board = calloc (h, sizeof(t_cell *));
    for (int i = 0; i < h; i++)
    {
        board[i] = calloc (w, sizeof(t_cell));
    }
    return (board);   
}

void	free_board(t_cell **board, int w, int h)
{
    for (int i = 0; i < h; i++)
        free (board[i]);
    free (board);
}

void print_board(t_cell **board, int w, int h)
{
	for (int i = 0; i < h; i++)	
	{
		for (int j = 0; j < w; j++)
		{
			if (board[i][j].now == 1)
				putchar('0');
			else
				putchar(32);
		}
		putchar('\n');
	}
}

int neighbours(t_cell **board, int x, int y, int w, int h)
{
	int dx;
	int dy;
	int count;

	count = 0;
	dy = y - 1;

	for (int i = 0; i < 3; i++)
	{
		dx = x - 1;
		for (int j = 0; j < 3; j++)
		{
			if (x == dx && y == dy)
			{
				dx++;
				continue;
			}
			if ((dx >= 0 && dx < w) && (dy >= 0 && dy < h))
			{
				if (board[dy][dx].now == 1)
					count++;
			}
			dx++;
		}
		dy++;
	}
	return (count);
}

void itenerations(t_cell **board, int w, int h)
{
	int count;
	int live;

	live = 0;
	count = 0;

	for (int i = 0; i < h; i++)
	{	
		for (int j = 0; j < w; j++)
		{
			live = board[i][j].now;
			count = neighbours(board, j, i, w, h);
			if ((live== 1 && (count == 2 || count == 3)) || (live== 0 && count == 3))
				board[i][j].next = 1;
			else
				board[i][j].next = 0;
		}
	}
}

void change_boards(t_cell **board, int w, int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			board[i][j].now = board[i][j].next;
	}
}

