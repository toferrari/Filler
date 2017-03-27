/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:50:23 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/27 16:39:54 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

#define TAB1 (check->tab1)
#define TAB2 (check->tab2)
#define TAI1 (check->taille1)
#define TAI2 (check->taille2)

void			ft_print(t_check *check)
{
	int i;

	i = 0;
	ft_putstr("line a :");
	while (i < TAI1)
	{
		ft_putnbr(TAB1[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	ft_putstr("line b :");
	if (TAI2 > 0)
	{
		i = 0;
		while (i < TAI2)
		{
			ft_putnbr(TAB2[i]);
			ft_putchar(' ');
			i++;
		}
	}
	ft_putchar('\n');
	ft_putchar('\n');
}
