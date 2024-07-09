/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:28:25 by yachan            #+#    #+#             */
/*   Updated: 2024/05/09 13:35:43 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

/*int main(void)
{
	char	destination[100];
	char	source[];

    destination[100] = "HelloWorld";
    source[] = "HelloWorld";
    ft_strncat(destination, source, 10);
    printf("%s", destination);
}*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*final;

	final = dest;
	while (*final != '\0')
	{
		final++;
	}
	while (nb > 0 && *src != '\0')
	{
		*final = *src;
		final++;
		src++;
		nb--;
	}
	*final = '\0';
	return (dest);
}
