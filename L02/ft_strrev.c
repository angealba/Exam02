/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:08:28 by analbarr          #+#    #+#             */
/*   Updated: 2023/04/18 13:08:38 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	char	tmp;
	int		len;

	i = 0;
	len = ft_strlen(str);
	printf("len: %d\n", len); 
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hola";

	printf("str: %s\n", str); 
	ft_strrev(str);
	printf("str2: %s\n", str); 
	return (0);
}