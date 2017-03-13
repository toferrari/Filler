/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 13:39:50 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/13 16:01:58 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			ft_rotate2(t_check *check)
{
	if (check->taille1 > 1)
		ft_rotate(&check->tab1, check->taille1);
	if (check->taille2 > 1)
		ft_rotate(&check->tab2, check->taille2);
}
