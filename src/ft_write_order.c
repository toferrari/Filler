/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 20:18:33 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/30 11:37:12 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

#define TAB1 (check->tab1)
#define TAB2 (check->tab2)
#define TAI1 (check->taille1)
#define TAI2 (check->taille2)

void			ft_write_order(t_check *check, char *order)
{
	if (ft_strcmp(ft_check_end(*check), "OK") == 0)
		return ;
	check->count++;
	ft_putendl(order);
	ft_checker(order, check);
}
