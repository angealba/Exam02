/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:40:23 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/18 16:57:08 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int start;
	int end;
	int	flag;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i] != '\0')
			i++;
		i--;
		while(i >= 0)
		{
			while(av[1][i] == ' ' || av[1][i] == '\t')
				i--;
			end = i;
			while(i >= 0  && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			start = i + 1;
			flag = start;
			while(start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return(0);
}
