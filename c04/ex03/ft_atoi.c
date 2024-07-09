/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:22:43 by yachan            #+#    #+#             */
/*   Updated: 2024/05/15 13:23:21 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_atoi(char *str);

/*int	main(void)
{
	printf("%i\n", ft_atoi("          ---12 3.5"));
}*/

int	ft_atoi(char *str)
{
	int	op;
	int	final;

	op = 1;
	final = 0;
	while (*str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			op *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		final = final * 10 + *str - '0';
		str++;
	}
	return (final * op);
}
