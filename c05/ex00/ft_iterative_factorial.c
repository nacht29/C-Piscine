/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:01:10 by yachan            #+#    #+#             */
/*   Updated: 2024/05/15 17:06:24 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb);

/*int main(void)
{
	int fac = 5;
	int results = ft_iterative_factorial(fac);
	printf("factorial of %i is %i\n", fac, results);
}*/

int	ft_iterative_factorial(int nb)
{
	int	holder;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	holder = nb;
	while (--nb > 0)
	{
		holder *= nb;
	}
	return (holder);
}
