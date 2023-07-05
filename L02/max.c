/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:08:21 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/05 16:23:45 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int max;

	i = 0;
	max = 0;
	if(!tab)
	   return (0);
	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

/*int main(void)
{
	int tab[] = {9, 2, 4, 6, 98, -5, 74, 547};

	printf("max: %d", max(tab, 8));
	return (0);
}*/
