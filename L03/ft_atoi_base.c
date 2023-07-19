/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:38:31 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/19 16:05:20 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void to_lower(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}

int ft_strchr(char *str, char c)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
			return(i);
		i++;
	}
	return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int j;
	int res;
	int sign;
	char *base;

	i = 0;
	j = 0;
	res = 0;
	sign = 1;
	base = "0123456789abcdef";
	if(str_base >= 2 && str_base <= 16)
	{
		to_lower((char *)str);
		while(str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
			i++;
		if(str[i] == '-')
			sign *= -1;
		if(str[i] == '+' || str[i] == '-')
			i++;
		while(str[i] != '\0')
		{
			j = ft_strchr(base, str[i]);
			if (j >= 0)
			{
				res = (res * str_base) + j;
				i++;
			}
		}
	}
	return(sign * res);
}

/*int main(int ac, char **av)
{
	if(ac == 3)
	{
		printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
	}
	return(0);
}*/
