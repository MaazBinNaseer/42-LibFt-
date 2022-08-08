/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:59:57 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/08 14:08:27 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new2;

	if (!*lst)
		return ;
	while (*lst)
	{
		new2 = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = new2;
	}
	*lst = 0;
}
