/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:58:51 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/27 16:26:54 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	wordcheck(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

void	freed(char **a)
{
	int	j;

	j = 0;
	while (a[j] != (void *)0)
	{
		free(a[j]);
		j++;
	}
	free(a);
}

int	lchecker(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int		co;
	int		l;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	co = 0;
	a = (char **)malloc((wordcheck(s, c) + 1) * sizeof(char *));
	if (!a)
		return (0);
	while (co < wordcheck(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		l = lchecker(s, c, i);
		a[co] = ft_substr(s, i, l);
		i += l;
		if (!(a))
			freed(a);
		co++;
	}
	a[co] = 0;
	return (a);
}