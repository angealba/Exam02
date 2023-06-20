/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:58:08 by analbarr          #+#    #+#             */
/*   Updated: 2023/06/20 14:17:55 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	res;

	res = 0;
	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		if (av[2][0] == '+')
			res = a + b;
		else if (av[2][0] == '-')
			res = a - b;
		else if (av[2][0] == '*')
			res = a * b;
		else if (av[2][0] == '/')
			res = a / b;
		else if (av[2][0] == '%')
			res = a % b;
		printf("%d", res);
	}
	printf("%s", "\n");
}
