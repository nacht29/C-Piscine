/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:42:28 by yachan            #+#    #+#             */
/*   Updated: 2024/05/11 13:07:33 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

/*int main(void)
{
	char	mainstr[];
	char	substr[];
	char	*output;
	

    mainstr[] = "hello world there";
    substr[] = "wor";
    output = ft_strstr(mainstr, substr);
    if (output != NULL)
		printf("%s\n", output);
}*/
char	*ft_strstr(char *str, char *to_find)
{
	char	*output;

	while (*str != '\0')
	{
		output = str;
		while (*output != '\0' && *to_find != '\0' && *output == *to_find)
		{
			output++;
			to_find++;
		}
		if (*to_find == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
