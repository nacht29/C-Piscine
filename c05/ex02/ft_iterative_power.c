/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:08:17 by yachan            #+#    #+#             */
/*   Updated: 2024/05/16 18:24:15 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

/*int	main(void)
{
	int base = 0;
	int power = 1;
	int results = ft_iterative_power(base, power);
	printf("%i to the power to %i is %i", base, power, results);
}*/

int	ft_iterative_power(int nb, int power)
{
	int	holder;

	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	holder = nb;
	while (--power > 0)
	{
		holder *= nb;
	}
	return (holder);
}
