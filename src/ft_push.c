/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 10:56:48 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/15 18:12:14 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

static void		ft_new_taille(t_check *check, char c)
{
	if (c == 'a')
	{
		check->taille1++;
		check->taille2--;
	}
	else
	{
		check->taille1--;
		check->taille2++;
	}
}

static void		ft_shift_tab_r(int **tab, int taille)
{
	int j;

	j = taille - 1;
	while (j >= 0)
	{
		(*tab)[j + 1] = (*tab)[j];
		j--;
	}
}

static void		ft_shift_tab_l(int **tab, int taille)
{
	int j;

	j = 0;
	while (j < taille)
	{
		(*tab)[j] = (*tab)[j + 1];
		j++;
	}
}

void			ft_push(t_check *check, char c)
{
	int tmp;

	if (c == 'a' && check->taille2 > 0)
	{
		tmp = check->tab2[0];
		ft_shift_tab_r(&check->tab1, check->taille1);
		check->tab1[0] = tmp;
		ft_shift_tab_l(&check->tab2, check->taille2);
		ft_new_taille(check, c);
	}
	else if (c == 'b' && check->taille1 > 0)
	{
		tmp = check->tab1[0];
		if (check->taille2 > 0)
			ft_shift_tab_r(&check->tab2, check->taille2);
		check->tab2[0] = tmp;
		ft_shift_tab_l(&check->tab1, check->taille1);
		ft_new_taille(check, c);
	}
}
