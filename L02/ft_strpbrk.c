/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:44:21 by analbarr          #+#    #+#             */
/*   Updated: 2023/04/12 18:44:47 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	while(*s1)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			if (*s1 == s2[i])
				return (char *)s1;
			i++;
		}
		s1++;
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "hola";
	char	s2[] = "aeiou";

	printf("%s", ft_strpbrk(s1, s2));
	printf("%s", strpbrk(s1, s2));
	return (0);
}