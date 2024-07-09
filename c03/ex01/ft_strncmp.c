/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:04:44 by yachan            #+#    #+#             */
/*   Updated: 2024/05/14 12:50:46 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//#include <stdio.h>
//#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

/*int main(int argc, char *argv[])
{
    if (argc < 3)
        printf("Error");
    else
    printf("%i", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
