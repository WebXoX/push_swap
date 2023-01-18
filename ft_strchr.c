/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:07:31 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/22 11:48:01 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ms;
	size_t	i;

	i = 0;
	ms = (char *)s;
	while (i <= ft_strlen(s))
	{
		if (ms[0] == (unsigned char)c)
			return (ms);
		i++;
		ms++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[30] = "tripouille";
// 	// printf("%d\n", str[1]);
// 	printf("%s\n", strchr(str, 0));
// 	printf("%s\n", ft_strchr(str, 0));
// 	//printf("%s:", str);
// 	//printf("\n%d",ft_memset('s'));
// }