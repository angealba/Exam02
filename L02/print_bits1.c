/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:51:09 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/18 20:24:28 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while(i)
	{
		//printf("i = %d\n", i);
		bit = (octet >> --i & 1) + 48;
		write(1, &bit, 1);
	}
}

int main(void)
{
	print_bits(65);
	write(1, "\n", 1);
	return(0);
}
