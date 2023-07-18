/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:22:40 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/18 15:35:13 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if(n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int	main(int ac, char **av)
{
	(void)av;

	if(ac >= 1)
		ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return(0);
}
