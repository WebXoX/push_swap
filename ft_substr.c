/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:19:36 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/28 16:47:44 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*news;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		len = 0;
	news = (char *)malloc((len + 1) * sizeof(char));
	if (!news)
		return (NULL);
	while (*(s + start) && i < len && s[i] != '\0')
	{
		news[i] = *(s + start + i);
		i++;
	}
	news[i] = '\0';
	return (news);
}
// int	main(void)
// {
// 	char *c;
//     char *v;

//     v = "tripouille";
//     c = ft_substr("tripouille", 0, 0);

//     printf("%s\n %d",c, strcmp(c, ""));

// }