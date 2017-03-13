/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 13:53:32 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/13 15:05:46 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			ft_rotate_reverse(int **tab, int taille)
{
	int tmp;
	if (taille > 1)
	{
		tmp = (*tab)[taille - 1];
		ft_swap_tab_r(tab, taille);
		(*tab)[0] = tmp;
	}
}
