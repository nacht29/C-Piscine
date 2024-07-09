/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:20:10 by yachan            #+#    #+#             */
/*   Updated: 2024/05/15 17:22:27 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb);

/*int main(void)
{
	int	num;
	num = ft_sqrt(25);
	printf("%i\n", num);
}*/
int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb)
	{
		if ((i * i) == nb)
			break ;
		else if ((i * i) > nb)
			return (0);
		i++;
	}
	return (i);
}
