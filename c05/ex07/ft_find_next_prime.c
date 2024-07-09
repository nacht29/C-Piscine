/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:28:54 by yachan            #+#    #+#             */
/*   Updated: 2024/05/15 17:33:39 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

/*int	main(void)
{
	printf("%i\n", ft_find_next_prime(2));
}*/

int	ft_is_prime(int nb)
{
	int	holder;

	if (nb <= 1)
		return (0);
	holder = nb / 2;
	while (holder > 0)
	{
		if (nb % holder == 0 && holder != 1)
			return (0);
		holder--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
