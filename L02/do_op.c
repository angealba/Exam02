/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:43:24 by analbarr          #+#    #+#             */
/*   Updated: 2023/04/11 16:43:48 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	n3;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		n3 = 0;
		if (argv[2][0] == '+' && argv[2][1] == '\0')
			n3 = n1 + n2;
		else if (argv[2][0] == '-' && argv[2][1] == '\0')
			n3 = n1 - n2;
		else if (argv[2][0] == '*' && argv[2][1] == '\0')
			n3 = n1 * n2;
		else if (argv[2][0] == '/' && argv[2][1] == '\0')
			n3 = n1 / n2;
		else if (argv[2][0] == '%' && argv[2][1] == '\0')
			n3 = n1 % n2;
		printf("%d", n3);
	}
	printf("%c", '\n');
	return (0);
}