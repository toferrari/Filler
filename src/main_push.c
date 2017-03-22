/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:48:49 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/22 22:41:49 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

#define TAB1 (check->tab1)
#define TAB2 (check->tab2)
#define TAI1 (check->taille1)
#define TAI2 (check->taille2)

int			ft_error(char *error)
{
	ft_putendl(error);
	return (0);
}

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

int				main(int argc, char **argv)
{
	t_check	check;

	if (ft_strcmp(ft_check(argv, argc, &check), "OK") != 0)
		return (ft_error("Error"));
	check.count = 0;
	ft_print(&check);
	ft_sort_a(&check, check.taille1);
	ft_print(&check);
	ft_putstrnbr("count = ", check.count);
	//ft_putstr(check.str);
	return (0);
}
