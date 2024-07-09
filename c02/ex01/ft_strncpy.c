/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:03:47 by yachan            #+#    #+#             */
/*   Updated: 2024/05/08 14:22:45 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

/*int main(int argc, char *argv[])
{
    char destination[100];
    if (argc >= 3)
        ft_strncpy(destination, argv[1], atoi(argv[2]));
    else
    {
        write(1, "Error.", 5);
        return (0);
    }
    printf("%s", destination);
}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
