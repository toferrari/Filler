/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 10:32:13 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/13 14:20:11 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			ft_swap2(t_check *check)
{
	int tmp;

	if (check->taille1 > 0)
		ft_swap(&check->tab1, check->taille1);
	if (check->taille2 > 0)
		ft_swap(&check->tab2, check->taille2);
}
