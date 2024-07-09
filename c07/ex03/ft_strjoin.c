/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:56:48 by yachan            #+#    #+#             */
/*   Updated: 2024/05/16 20:56:48 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		malloc_str(int size, char **str, char *sepo);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

/*int	main(void)
{
	// char *dummy[] = { "Hello", "world" };
	char *dummy[] = {NULL};
	char *sep = "";
	char *string = ft_strjoin(0, dummy, sep);
	while (*string)
	{
		write(1, string, 1);
		string++;
	}
}*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*holder;

	i = 0;
	holder = malloc(sizeof(char) * malloc_str(size, strs, sep) + 1);
	while (i < malloc_str(size, strs, sep) + 1)
	{
		holder[i] = '\0';
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		ft_strcat(holder, strs[i]);
		ft_strcat(holder, sep);
		i++;
	}
	if (size > 0)
		ft_strcat(holder, strs[size - 1]);
	else
		*holder = '\0';
	return (holder);
}

int	malloc_str(int size, char **str, char *sepo)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (i < size)
	{
		counter += ft_strlen(str[i]);
		i++;
	}
	counter += (size - 1) * ft_strlen(sepo);
	return (counter);
}

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

char	*ft_strcat(char *dest, char *src)
{
	char	*final;

	final = dest;
	while (*final != '\0')
	{
		final++;
	}
	while (*src != '\0')
	{
		*final = *src;
		final++;
		src++;
	}
	*final = '\0';
	return (dest);
}
