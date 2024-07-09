/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/05/16 20:50:36 by yachan            #+#    #+#             */
/*   Updated: 2024/05/16 20:50:36 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

/*int	main(void)
{
	char *src;
	char *dest;

	*src = "hello world";
	*dest = ft_strdup(src);
}*/

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*holder;

	i = 0;
	holder = malloc((sizeof(char) * ft_strlen(src) + 1));
	while (src[i])
	{
		holder[i] = src[i];
		i++;
	}
	holder[i] = '\0';
	return (holder);
}
