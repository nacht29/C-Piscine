/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:19:00 by yachan            #+#    #+#             */
/*   Updated: 2024/05/12 14:32:51 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int				ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

/*int main(void)
{
	char	source[5];
	char	destination[10];
	int		count;

    source[5] = "world";
    destination[10] = "hello";
    count = ft_strlcat(destination, source, 10);
    printf("%i\n", count);
    printf("%s\n", destination);
}*/

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				j;
	unsigned int	counter;

	i = 0;
	j = size - ft_strlen(dest) - 1;
	counter = 0;
	while (*dest != '\0')
	{
		dest++;
		counter++;
	}
	while (i < j && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
		i++;
	}
	*dest = '\0';
	return (counter);
}
