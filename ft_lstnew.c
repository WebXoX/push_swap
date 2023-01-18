/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:14:11 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/27 17:07:21 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*cont;

	cont = (t_list *)malloc(sizeof(t_list));
	if (!cont)
		return (NULL);
	cont->content = content;
	cont->next = NULL;
	return (cont);
}