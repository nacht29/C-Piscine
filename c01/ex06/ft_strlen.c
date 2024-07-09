/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:06:08 by yachan            #+#    #+#             */
/*   Updated: 2024/04/30 14:11:57 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str);

/*int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1,"Error",5);
		return 1;
	}

	char *input = argv[1];
	int count = ft_strlen(input);
	printf("word count: %i\n", count);
}*/

int	ft_strlen(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
