/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:39:13 by yachan            #+#    #+#             */
/*   Updated: 2024/05/14 12:40:31 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_strlen(char *str);
int		get_base(int len, char *base);
void	ft_putnbr(int nb, int base, char *place);

/*int	main(void)
{
	ft_putnbr_base(-40, "poneyvif");
}*/
void	ft_putnbr_base(int nbr, char *base)
{
	int	bas;

	if (ft_strlen(base) > 1)
	{
		bas = get_base(ft_strlen(base), base);
		if (bas != 0)
			ft_putnbr(nbr, bas, base);
	}
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

int	get_base(int len, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (base[j] == base[i] && j != i)
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (len);
}

void	ft_putnbr(int nb, int base, char *place)
{
	char	dest[32];
	int		i;
	long	holder;

	i = 0;
	holder = nb;
	if (holder < 0)
	{
		holder *= -1;
		write(1, "-", 1);
	}
	while (holder >= base)
	{
		dest[i] = place[holder % base];
		holder /= base;
		i++;
	}
	dest[i] = place[holder % base];
	i++;
	while (i > 0)
	{
		write(1, &dest[i - 1], 1);
		i--;
	}
}
