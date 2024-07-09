/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:53:00 by yachan            #+#    #+#             */
/*   Updated: 2024/04/27 12:49:45 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*int main(void)
{
	char a;

	a ='c';
	ft_putchar(a);
}*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
