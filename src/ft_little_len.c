/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 11:20:20 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/30 14:39:03 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

#define TAB1 (check->tab1)
#define TAB2 (check->tab2)
#define TAI1 (check->taille1)
#define TAI2 (check->taille2)

static int		ft_mediane(int *tab, int len)
{
	int	up;
	int	down;
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		down = 0;
		up = 0;
		while (j < len)
		{
			if (tab[j] > tab[i])
				up++;
			else if (tab[j] < tab[i])
				down++;
			j++;
		}
		if (up == down || up + 1 == down)
			return (tab[i]);
		i++;
	}
	return (0);
}

static void		ft_sort_three(t_check *check)
{
	if (ft_strcmp(ft_check_end(*check), "OK") == 0)
		return ;
	if (TAB1[0] > TAB1[1] && TAB1[0] < TAB1[TAI1 - 1])
		ft_write_order(check, "sa");
	else if (TAB1[0] < TAB1[1] && TAB1[0] > TAB1[TAI1 - 1])
		ft_write_order(check, "rra");
	else if (TAB1[1] < TAB1[0] && TAB1[1] < TAB1[TAI1 - 1])
		ft_write_order(check, "ra");
	else if (TAB1[0] > TAB1[1] && TAB1[1] > TAB1[TAI1 - 1])
	{
		ft_write_order(check, "sa");
		ft_write_order(check, "rra");
	}
	else if (TAB1[0] < TAB1[1] && TAB1[1] > TAB1[TAI1 - 1])
	{
		ft_write_order(check, "rra");
		ft_write_order(check, "sa");
	}
}

static void		ft_sort_five(t_check *check)
{
	int mediane;
	int i;
	int pb;

	mediane = ft_mediane(TAB1, TAI1);
	i = 0;
	pb = 1;
	while (pb < 3)
	{
		if (check->tab1[0] < mediane && ++pb)
			ft_write_order(check, "pb");
		else
			ft_write_order(check, "ra");
		i++;
	}
	if (TAI1 == 3)
		ft_sort_three(check);
	else if (TAB1[0] > TAB1[1])
		ft_write_order(check, "sa");
	if (TAB2[0] < TAB2[1])
		ft_write_order(check, "sb");
	ft_write_order(check, "pa");
	ft_write_order(check, "pa");
}

void			ft_little_len(t_check *check)
{
	if (TAI1 <= 3)
		ft_sort_three(check);
	else
		ft_sort_five(check);
}
