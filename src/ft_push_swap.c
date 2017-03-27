/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:47:17 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/27 16:51:01 by tferrari         ###   ########.fr       */
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
			if (tab[j] > tab [i])
				up++;
			else if (tab[j] < tab [i])
				down++;
			j++;
		}
		if (up == down || up + 1 == down)
			return (tab[i]);
		i++;
	}
	return (0);
}


static void		ft_push_b(t_check *check, int len)
{
	int	mediane;
	int	i;
	int	count;
	int	pb;

	mediane = ft_mediane(check->tab1, len);
	i = 0;
	pb = 0;
	count = 0;
	while (i < len && pb < len / 2)
	{
		if (check->tab1[0] < mediane && ++pb)
			ft_write_order(check, "pb");
		else if (++count)
			ft_write_order(check, "ra");
		i++;
	}
	while (0 < count && check->tri == 1)
	{
		ft_write_order(check, "rra");
		count--;
	}
}

void			ft_push_a(t_check *check, int len)
{
	int	i;
	int	mediane;
	int	count;

	count = 0;
	i = 0;
	mediane = ft_mediane(check->tab2, check->taille2);
	while (i < len && count != TAI2)
	{
		if (check->tab2[0] >= mediane)
		{
			ft_write_order(check, "pa");
			count++;
		}
		else
			ft_write_order(check, "rb");
		i++;
	}
	ft_sort_a(check, count);
	if (len / 2 == TAI2)
		ft_sort_b(check, len - count);
}

void			ft_sort_b(t_check *check, int len)
{
	check->tri = 1;
	if (len <= 2)
	{
		if (TAB2[0] < TAB2[1] && len == 2 && check->taille2 > 0)
			ft_write_order(check, "sb");
		if (len == 2)
			ft_write_order(check, "pa");
		ft_write_order(check, "pa");
	}
	else
		ft_push_a(check, len);
}


void			ft_sort_a(t_check *check, int len)
{
	if (len == 2 && TAB1[0] > TAB1[1])
		ft_write_order(check, "sa");
	else if (len > 2)
	{
		ft_push_b(check, len);
		ft_sort_a(check, len / 2 + len % 2);
		ft_sort_b(check, len / 2);
	}
}
