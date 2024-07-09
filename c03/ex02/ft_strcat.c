/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:08:46 by yachan            #+#    #+#             */
/*   Updated: 2024/05/09 13:23:57 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

/*int main(void)
{
	char	destination[100];
	char	source[];
	

    destination[100] = "Hello, ";
    source[] = "world";
    ft_strcat(destination, source);
    printf("%s", destination);
}*/

char	*ft_strcat(char *dest, char *src)
{
	char	*final;

	final = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (final);
}
