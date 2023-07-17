/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:31:10 by analbarr          #+#    #+#             */
/*   Updated: 2023/07/11 17:04:13 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(s[i] != '\0')
	{
		while(reject[j] != '\0')
		{
			if(s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char *s;
	char *charset;

	s = "rato"; 	
	charset = "oglloo";
	printf("%lu", strcspn(s, charset));
	return(0);
}

