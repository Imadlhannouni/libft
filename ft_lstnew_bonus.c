/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilhannou <ilhannou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:35:09 by ilhannou          #+#    #+#             */
/*   Updated: 2024/10/31 15:49:21 by ilhannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_noeud;

	new_noeud = malloc(sizeof(t_list));
	if (!new_noeud)
		return (NULL);
	new_noeud->content = content;
	new_noeud->next = NULL;
	return (new_noeud);
}
