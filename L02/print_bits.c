/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:51:09 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/18 20:22:00 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 7;
	while(i >= 0)
	{
		bit = (octet >> i & 1) + 48;
		write(1, &bit, 1);
		i--;
	}
}

int main(void)
{
	print_bits(2);
	write(1, "\n", 1);
	return(0);
}
