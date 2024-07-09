/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:32:55 by yachan            #+#    #+#             */
/*   Updated: 2024/05/11 14:33:00 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

/*int main(int argc, char *argv[])
{
    int i = 1;
    if (argc < 2)
    {
        write(1, "Error\n", 6);
        return (0);
    }
    while (i < argc)
    {
        ft_putstr(argv[i]);
        if (i < argc - 1)
            write(1, " ", 1);
        i ++;
    }
}*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
