/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:28:27 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/12 16:31:52 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int	main(int ac, char **av)
{
	int n;
	int i;
	int j;
	int res;
	char m;

	n = 0;
	i = 0;
	j = 1;
	res = 0;
	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			n = n * 10 + (av[1][i] - 48);
			i++;
		}
		while (j <= 9)
		{
			res = j * n;
			m = j + 48;
			write (1, &m, 1);
			write (1, " x ", 3);
			ft_putnbr(n);
			write (1, " = ", 3);
			ft_putnbr(res);
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
