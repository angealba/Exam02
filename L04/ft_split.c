/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:21:03 by analbarr          #+#    #+#             */
/*   Updated: 2023/06/20 17:56:28 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_words(char *str)
{
	int i;
	int w;

	i = 0;
	w = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			w++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return (w);
}

char	*put_word(char *str, int i, int len)
{
	int j;
	char *word;

	word = (char *)malloc(sizeof(char) * len + 1);
	if (!word)
		return (0);
	j = 0;
	while (len > 0 && str)
	{
		word[j] = str[i - len];
		j++;
		len--;
	}
	word[j] = '\0';
	return (word);
}


char	**ft_split(char *str)
{
	char **split;
	int	i;
	int w_num;
	int len;
	int	w;

	w_num = count_words(str);
	split = (char **)malloc(sizeof (char *) * w_num + 1);
	if (!split)
		return (0);
	i = 0;
	len = 0;
	w = 0;
	while (w < w_num && str[i])
	{ 
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			len++;
			i++;
		}
		split[w] = put_word(str, i, len);
		w++;
		len = 0;
	}
	split[w] = NULL;
	return (split); 
}

/*int main (void)
{
	char str[] = "soy la persona mas afortunada del mundo";
	char **s;
	int w;
	int i;
	
	i = 0;
	w = count_words(str);
	printf("w_num: %d\n", w);
	s = ft_split(str);

	while (i <= w)
	{
		printf("w%d: %s\n", i, s[i]);
		i++;
	}
	return (0);
}*/
