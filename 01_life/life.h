/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fif <luis-fif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:34:06 by luis-fif          #+#    #+#             */
/*   Updated: 2025/09/10 14:07:38 by luis-fif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIFE_H
# define LIFE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>


typedef struct s_cell
{
    int now;
    int next;
}t_cell;

t_cell  **init_board(int w, int h);
void    free_board(t_cell **board, int w, int h);
void    print_board(t_cell **board, int w, int h);
void itenerations(t_cell **board, int w, int h);
void change_boards(t_cell **board, int w, int h);

#endif

