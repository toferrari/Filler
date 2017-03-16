/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 16:33:35 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/15 16:34:15 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			ft_swap_tab_r(int **tab, int taille)
{
	int j;

	j = taille - 1;
	while (j >= 0)
	{
		(*tab)[j + 1] = (*tab)[j];
		j--;
	}
}

void			ft_swap_tab_l(int **tab, int taille)
{
	int j;

	j = 0;
	while (j < taille)
	{
		(*tab)[j] = (*tab)[j + 1];
		j++;
	}
}
