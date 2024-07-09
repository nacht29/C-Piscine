/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/05/16 20:53:46 by yachan            #+#    #+#             */
/*   Updated: 2024/05/16 20:53:46 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	*ft_range(int min, int max);

/*int	main(void)
{
	int min = 500;
	int max = 100;

	int *arr = ft_range(min, max);
	if (arr == NULL)
		return (0);
	for (int i = 0; i < (max - min + 1); i++)
		printf("%i ", arr[i]);
}*/

int	*ft_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
