/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:45:02 by yachan            #+#    #+#             */
/*   Updated: 2024/05/16 18:25:08 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	process(int ac, char **argv);

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*holder;

	i = 1;
	while (i < (argc - 1))
	{
		j = 1;
		while (j < (argc - 1))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				holder = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = holder;
			}
			j++;
		}
		i++;
	}
	process (argc, argv);
}

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

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	process(int ac, char **argv)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}
