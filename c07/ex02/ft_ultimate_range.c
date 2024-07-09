/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:54:59 by yachan            #+#    #+#             */
/*   Updated: 2024/05/16 20:54:59 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

/*int	main(void)
{
	int min = -5;
	int max = 5;
	int *range;
	int returnval = ft_ultimate_range(&range, min, max);
	for (int i = 0; i < (max - min); i++)
		printf("%i ", range[i]);
    printf("\n%i\n", returnval);
}*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	holder;

	i = 0;
	holder = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min + 1));
	while (min <= max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (max - holder);
}
