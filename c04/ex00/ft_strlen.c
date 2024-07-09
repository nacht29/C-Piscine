/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:44:45 by yachan            #+#    #+#             */
/*   Updated: 2024/05/12 15:08:53 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

/*int main(int argc, char *argv[])
{
    int count = 0;
    int i = 1;
    if (argc < 2)
    {
        write(1, "Error\n", 6);
        return (0);
    }
    while (i < argc)
    {
        count += ft_strlen(argv[i]);
        count += ft_strlen(" ");
        i ++;
    }
    printf("len: %i\n", (count - 1));
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
