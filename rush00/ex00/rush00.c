/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:35:17 by yachan            #+#    #+#             */
/*   Updated: 2024/04/28 19:27:34 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char sym);
//column, row
void	rush(int x, int y)
{
	int	column;
	int	row;

	row = 1;
	column = 1;
	while (row <= y && x >= 1 && y >= 1)
	{
		while (column <= x)
		{
			if ((column == 1 || column % x == 0) && (row == 1 || row == y))
				ft_putchar('o');
			else if ((column == 1 || column % x == 0) && (row != 1 && row != y))
				ft_putchar('|');
			else if ((row == 1 || row == y) && column > 1)
				ft_putchar('-');
			else if ((row != 1 && row != y) && column > 1)
				ft_putchar(' ');
			column++;
		}
		row++;
		column = 1;
		write(1, "\n", 1);
	}
}



