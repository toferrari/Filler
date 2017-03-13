/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_reverse2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 13:56:06 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/13 13:57:00 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			ft_rotate_reverse2(t_check check)
{
	int tmp;
	if (check->taille1 > 1)
		ft_rotate_reverse2(&check.tab1, check.taille1);
	if (check->taille2 > 1)
		ft_rotate_reverse2(&check.tab2, check.taille2);
}
