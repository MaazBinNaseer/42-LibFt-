/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:45:21 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/04 21:11:27 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new2;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new2 = ft_lstlast(*lst);
	new2->next = new;
}
