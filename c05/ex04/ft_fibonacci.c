/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:16:33 by yachan            #+#    #+#             */
/*   Updated: 2024/05/15 17:18:18 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index);

/*int main(void)
{
	int test = ft_fibonacci(11);
	printf("%i\n", test);
}*/

int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	result;

	a = 0;
	b = 1;
	result = a + b;
	a = b;
	b = result;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
