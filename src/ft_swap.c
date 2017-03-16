/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 15:43:19 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/15 11:35:46 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		ft_swap(int **tab, int taille)
{
	int tmp;

	if (taille > 1)
	{
		tmp = (*tab)[0];
		(*tab)[0] = (*tab)[1];
		(*tab)[1] = tmp;
	}
}
