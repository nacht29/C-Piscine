#include <unistd.h>

void	rush(int x, int y);

void	ft_putchar(char sym);

int	main(void)
{
	rush(10, 10);
}

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
			if ((column == 1 && row == 1) || (column == x && row == y && x > 1))
 				ft_putchar('/');
            else if ((column == x && row == 1) || (column == 1 && row == y))
                ft_putchar('\\');
			else if (((column == 1 || column == x) && (row != 1 && row != y))
			    || ((row == 1 || row == y) && column > 1))
				ft_putchar('*');
			else if ((row != 1 && row != y) && column > 1)
				ft_putchar(' ');
			column++;
		}
		row++;
		column = 1;
		write(1, "\n", 1);
	}
}

void	ft_putchar(char sym)
{
	write(1, &sym, 1);
}
