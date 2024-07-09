/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:59:36 by yachan            #+#    #+#             */
/*   Updated: 2024/05/09 12:59:38 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

/*int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        write(1, "Error", 5);
        return (0);
    }
    printf("%i", ft_strcmp(argv[1], argv[2]));
}*/
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
