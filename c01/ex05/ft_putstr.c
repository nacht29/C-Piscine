/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:09:30 by yachan            #+#    #+#             */
/*   Updated: 2024/04/30 15:14:50 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

/*int main(int argc, char *argv[])
{
    int command = 1;

    if (argc < 2)
    {
        write(1,"Error",5);
        return 1;
    }

    while (command <= argc)
    {
        char *input = argv[command];
        ft_putstr(input);
        command ++;
        if (command == argc)
            return 1;
    }
}*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
