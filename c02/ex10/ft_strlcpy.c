/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:16:09 by yachan            #+#    #+#             */
/*   Updated: 2024/05/08 15:12:48 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size);

/*int main(int argc, char *argv[])
{
    char destination[atoi(argv[1])];
    if (argc >= 3)
	{
        printf("%i\n", ft_strlcpy(destination, argv[2], atoi(argv[3])));
		printf("%s\n", destination);
	}
    else
    {
        write(1, "Error.", 5);
        return (0);
    }
}*/

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_count;

	i = 0;
	dest_count = 0;
	if (size == 0)
		return (dest_count);
	while (i < size && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		dest_count++;
		i++;
	}
	dest++;
	*dest = '\0';
	return (dest_count);
}
