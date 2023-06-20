/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:29:00 by analbarr          #+#    #+#             */
/*   Updated: 2023/06/20 15:16:20 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	n = 0;
	if (!a || !b)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (!(n % a == 0 && n % b == 0))
		   n++;
	return (n);
}

/*int main(void)
{
	unsigned int a;
	unsigned int b;

	a = 1;
	b = 2;
	printf("%d", lcm(a, b));
	return (0);
}*/	
