/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:01:54 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/19 11:23:08 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap_bits(unsigned char octet)
{
	unsigned char	new_oct;
	unsigned char	bit;
	int 	i;

	new_oct = (octet >> 4) | (octet << 4);
	i = 7;
	while(i >= 0)
	{
		bit = (new_oct >> i & 1) + 48;
		write(1, &bit, 1);
		i--;
	}
}

int main(void)
{
	swap_bits(65);
	write(1, "\n", 1);
	return(0);
}

