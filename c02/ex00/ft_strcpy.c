/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 13:59:05 by yachan            #+#    #+#             */
/*   Updated: 2024/05/05 14:26:36 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

/*int main(int argc, char *argv[])
{
        char destination[100];

    if (argc > 1)
    {
        ft_strcpy(destination, argv[1]);
        printf("%s", destination);
    }
}*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*final;

	final = dest;
	while (*src != '\0')
	{
		*final = *src;
		final++;
		src++;
	}
	*final = '\0';
	return (dest);
}
