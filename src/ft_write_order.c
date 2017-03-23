/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 20:18:33 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/23 16:05:47 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

#define TAB1 (check->tab1)
#define TAB2 (check->tab2)
#define TAI1 (check->taille1)
#define TAI2 (check->taille2)

static void			ft_print(t_check *check)
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

void			ft_write_order(t_check *check, char *order)
{
	int	len;

	len = ft_strlen(order) + 1;
	check->count++;
	if (!check->str)
	{
		if (!(check->str = ft_strnew(len)))
			return ;
	}
	else
		ft_realloc_adr(&check->str, len);
	check->str = ft_strcat(check->str, order);
	check->str = ft_strcat(check->str, "\n");
	ft_print(check);
	ft_checker(order, check);
	ft_putendl(order);
}
