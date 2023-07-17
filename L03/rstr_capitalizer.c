/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:02:09 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/17 20:48:46 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr_cap(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if((str[i] >= 97 && str[i] <= 122) && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int j;

	j = 1;
	if(ac >= 2)
	{
		while(j < ac)
		{
			rstr_cap(av[j]);
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}




