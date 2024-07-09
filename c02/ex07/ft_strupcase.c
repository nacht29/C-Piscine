/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:54:59 by yachan            #+#    #+#             */
/*   Updated: 2024/05/07 12:58:21 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str);

/*int main(int argc, char *argv[])
{
    if (argc < 2)
        return (0);
    else
        printf("%s", ft_strupcase(argv[1]));
}*/

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp != '\0')
	{
		if (*temp >= 'a' && *temp <= 'z')
			*temp -= 32;
		temp++;
	}
	return (str);
}
