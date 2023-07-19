/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:27:10 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/19 12:45:51 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char rev_bit;
	int	i;

	i = 8;
	rev_bit = 0;
	while (i > 0)
	{
		rev_bit = rev_bit * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return(rev_bit);
}

//The multiplication *2 moves rev_bit to the left one position, adding a 0 at 
//end. Adding (octet % 2) takes the last bit of the original octet to be added
//to the result of rev_bit*2.
//Dividing octet by 2 moves the octet one position to the right, adding a 0
//in the left side of the octet.// 
