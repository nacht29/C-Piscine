/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachan <yachan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:19:37 by yachan            #+#    #+#             */
/*   Updated: 2024/05/08 18:20:43 by yachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);
char	uppercase(char str);
char	lowercase(char str);
int		is_alpha(char str);
int		is_numeric(char str);

/*int main(void)
{
	char text[80] = "Jd$tqh";
    printf("%s", ft_strcapitalize(text));
}*/

int	is_alpha(char str)
{
	if (!(str >= 'a' && str <= 'z') && !(str >= 'A' && str <= 'Z'))
		return (0);
	else
		return (1);
}

int	is_numeric(char str)
{
	if (!(str >= '0' && str <= '9'))
		return (0);
	else
		return (1);
}

char	uppercase(char str)
{
	if (str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}

char	lowercase(char str)
{
	if (str >= 'A' && str <= 'Z')
		str += 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		to_upper;
	char	*ptr;

	to_upper = 1;
	ptr = str;
	while (*ptr != '\0')
	{
		if (is_alpha(*ptr) == 1 || is_numeric(*ptr) == 1)
		{
			if (to_upper == 1)
			{
				*ptr = uppercase(*ptr);
				to_upper = 0;
			}
			else
				*ptr = lowercase(*ptr);
		}
		else
			to_upper = 1;
		ptr++;
	}
	return (str);
}
