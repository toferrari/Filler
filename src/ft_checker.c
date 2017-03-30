/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 16:42:21 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/29 19:07:10 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

char			*ft_check_end(t_check check)
{
	int i;

	i = 0;
	if (check.taille2 > 0)
		return ("KO");
	while (i < check.taille1 - 1)
	{
		if (check.tab1[i] > check.tab1[i + 1])
			return ("KO");
		i++;
	}
	return ("OK");
}

int				ft_check_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void			ft_checker(char *order, t_check *check)
{
	if (ft_strequ(order, "sa"))
		ft_swap1(&check->tab1, check->taille1);
	else if (ft_strequ(order, "sb"))
		ft_swap1(&check->tab2, check->taille2);
	else if (ft_strequ(order, "ss"))
		ft_swap2(check);
	else if (ft_strequ(order, "pb"))
		ft_push(check, 'b');
	else if (ft_strequ(order, "pa"))
		ft_push(check, 'a');
	else if (ft_strequ(order, "ra"))
		ft_rotate(&check->tab1, check->taille1);
	else if (ft_strequ(order, "rb"))
		ft_rotate(&check->tab2, check->taille2);
	else if (ft_strequ(order, "rr"))
		ft_rotate2(check);
	else if (ft_strequ(order, "rra"))
		ft_rotate_reverse(&check->tab1, check->taille1);
	else if (ft_strequ(order, "rrb"))
		ft_rotate_reverse(&check->tab2, check->taille2);
	else if (ft_strequ(order, "rrr"))
		ft_rotate_reverse2(check);
	else
		order[0] = 0;
}
