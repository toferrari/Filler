/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:47:17 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/16 12:59:58 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

#define TAB (check->tab1)

static int	ft_check_end(t_check *check)
{
	int i;

	i = 0;
	while (i < check->taille1 - 1)
	{
		if (check->tab1[i] > check->tab1[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void			ft_push_swap(t_check *check)
{
	int i;

	i = 0;
	check->count = check->taille1;
	while (i < (check->count / 2))
	{
		ft_push(check, 'b');
		i++;
	}
	while (ft_check_end(check) == 0 || (ft_check_end(check) == 1 && check->taille2 > 0))
	{

	}
	/*while (ft_check_end(check) == 0 || (ft_check_end(check) == 1 && check->taille2 > 0))
	{
		if (check->tab1[0] < check->tab1[1] && ft_check_end(check) == 0)
			ft_push(check, 'b');
		else if (check->tab1[0] > check->tab1[check->taille1 - 1])
			ft_rotate_reverse(&check->tab1, check->taille1);
		else if (check->tab1[0] > check->tab1[1] && check->tab1[1] < check->tab1[check->taille1 - 1])
			ft_swap(&check->tab1, check->taille1);
		else if (check->tab1[0] > check->tab1[1] && check->tab1[0] > check->tab1[check->taille1 - 1])
			ft_rotate(&check->tab1, check->taille1);
		else if (check->taille2 > 0)
			ft_push(check, 'a');
		i++;
		//ft_print(check);
	}*/
	ft_putstr("i = ");
	ft_putnbr(i);
}
