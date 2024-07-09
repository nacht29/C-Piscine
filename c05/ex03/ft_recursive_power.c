/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:14:54 by yachan            #+#    #+#             */
/*   Updated: 2024/05/15 17:15:34 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power);

/*int	main(void)
{
	int base = 2;
	int power = 5;
	int results = ft_recursive_power(base, power);
	printf("%i to the power to %i is %i", base, power, results);
}*/

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
