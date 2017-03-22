/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 20:18:33 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/22 22:34:33 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void			ft_write_order(t_check *check, char *order)
{
	int	len;

	len = ft_strlen(order) + 1;
	check->count++;
	if (!check->str)
	{
		if (!(check->str = ft_strnew(len)))
			return ;
	}
	else
		ft_realloc_adr(&check->str, len);
	check->str = ft_strcat(check->str, order);
	check->str = ft_strcat(check->str, "\n");
	ft_checker(order, check);
}
