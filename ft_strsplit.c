/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
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
=======
/*   Created: 2020/02/06 14:32:35 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/13 16:53:48 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns an fresh of “fresh” ss
** (all ending with '\0', including the fresh itself) obtained by spliting
** using the character c as a delimiter. If the allocation fails the function
** returns NULL.
*/

#include "libft.h"

size_t		word_count(char const *s, char c)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (s[i] == c)
		i++;
	if (s[i] != '\0')
		wc++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			wc++;
		i++;
	}
	return (wc);
}

size_t		word_length(char const *s, char c)
{
	int	length;
>>>>>>> 443221485b25c99d38b7827693aaf6d06b6dca84

	length = 0;
	while (*s != c && *s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

<<<<<<< HEAD
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
=======
char		**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	int		wl;
	int		size;
	int		i;

	size = word_count(s, c);
	i = 0;
	if (!s)
		return (0);
	fresh = (char **)malloc(sizeof(char *) * (size + 1));
>>>>>>> 443221485b25c99d38b7827693aaf6d06b6dca84
	while (i < size)
	{
		while (*s == c && *s != '\0')
			s++;
<<<<<<< HEAD
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
=======
		wl = word_length(s, c);
		fresh[i] = ft_strsub(s, 0, wl);
		if (!(fresh[i]))
			return (0);
		s = s + wl;
		i++;
	}
	fresh[i] = 0;
	return (fresh);
>>>>>>> 443221485b25c99d38b7827693aaf6d06b6dca84
}
