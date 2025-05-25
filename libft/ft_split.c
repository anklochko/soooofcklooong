/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anklochk <anklochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:59:25 by anklochk          #+#    #+#             */
/*   Updated: 2025/01/23 21:03:08 by anklochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **result, size_t position)
{
	while (position != 0)
	{
		free(result[position]);
		position--;
	}
	free(result[position]);
	free(result);
	return (NULL);
}

static void	ft_word(char const *s, size_t *first, size_t *last, char c)
{
	*first = *last;
	while (s[*first] == c)
		*first = *first + 1;
	*last = *first;
	while (s[*last] != c && s[*last] != '\0')
		*last = *last + 1;
}

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;
	size_t	first;
	size_t	last;

	count = 0;
	first = 0;
	last = 0;
	while (s[last] != '\0')
	{
		ft_word(s, &first, &last, c);
		if (last == first)
			break ;
		else
			count++;
	}
	return (count);
}

static char	*ft_fill(char const *s, size_t first, size_t last)
{
	char	*word;
	size_t	position;

	position = 0;
	word = malloc(sizeof(char) * (last - first) + 1);
	if (word == NULL)
		return (NULL);
	word[last - first] = 0;
	while (first < last)
	{
		word[position] = s[first];
		position++;
		first++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	first;
	size_t	last;
	size_t	position;

	result = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (result == NULL)
		return (NULL);
	result[ft_countwords(s, c)] = 0;
	last = 0;
	first = 0;
	position = 0;
	while (position < ft_countwords(s, c))
	{
		ft_word(s, &first, &last, c);
		if (last == first)
			break ;
		result[position] = ft_fill(s, first, last);
		if (result[position] == NULL)
			return (ft_free(result, position));
		position++;
	}
	return (result);
}
