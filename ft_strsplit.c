/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:59:28 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/11 17:47:48 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *string, char c)
{
	int			i;
	int			count;

	i = 0;
	count = 0;
	while (string[i] == c)
		i++;
	if (string[i] != '\0')
		count++;
	while (string[i] != '\0')
	{
		if (string[i] == c && string[i + 1] != c && string[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static int		get_word_length(char const *s, char c)
{
	int		length;

	length = 0;
	while (*s != c && *s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**array;
	int			word_length;
	int			size;
	int			i;

	i = 0;
	if (!s)
		return (0);
	size = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (size + 1));
	if (!array)
		return (0);
	while (i < size)
	{
		while (*s == c && *s != '\0')
			s++;
		word_length = get_word_length(s, c);
		array[i] = ft_strsub(s, 0, word_length);
		if (!(array[i]))
			return (0);
		s += word_length;
		i++;
	}
	array[i] = 0;
	return (array);
}
int main()
{
    char str[] = "*hello*fellow***students*";
    char **split_str;;

    printf("str BEFORE ft_strsplit=[%s]\n\n", str);

    split_str = ft_strsplit(str, ',');

	printf("str AFTER ft_strssplit=[%s]\n\n", split_str);

    return 0;
}
