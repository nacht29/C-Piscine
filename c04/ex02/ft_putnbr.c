/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:46:54 by yachan            #+#    #+#             */
/*   Updated: 2024/05/12 20:08:33 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

/*int main(void)
{
    ft_putnbr(-42);
}*/

void	ft_putnbr(int nb)
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
	while (holder >= 10)
	{
		dest[i] = '0' + holder % 10;
		holder /= 10;
		i++;
	}
	dest[i] = '0' + holder % 10;
	i++;
	while (i > 0)
	{
		write(1, &dest[i - 1], 1);
		i--;
	}
}
