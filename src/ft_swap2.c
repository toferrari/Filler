/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 10:32:13 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/22 13:28:37 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			ft_swap2(t_check *check)
{
	if (check->taille1 > 1)
		ft_swap1(&check->tab1, check->taille1);
	if (check->taille2 > 1)
		ft_swap1(&check->tab2, check->taille2);
}
