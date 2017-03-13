/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 12:01:02 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/13 15:04:57 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			ft_rotate(int **tab, int taille)
{
	int tmp;

	if (taille > 1)
	{
		tmp = (*tab)[0];
		ft_swap_tab_l(tab, taille);
		(*tab)[taille - 1] = tmp;
	}
}
