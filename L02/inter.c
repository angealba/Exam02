/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:07:38 by analbarr          #+#    #+#             */
/*   Updated: 2023/06/14 18:09:54 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			j = 0;
			while(argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					k = 0;
					while (argv[1][k] != argv[1][i])
						k++;
					if(k == i)
					{
						k = 0;
						while (argv[2][k] != argv[2][j])
							k++;
						if (k == j)
							write(1, &argv[1][i], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
