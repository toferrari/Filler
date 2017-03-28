/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:48:49 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/28 14:44:12 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

#define TAB1 (check.tab1)
#define TAB2 (check.tab2)
#define TAI1 (check.taille1)
#define TAI2 (check.taille2)

static int		ft_error(char *error)
{
	ft_putendl(error);
	return (0);
}

int				main(int argc, char **argv)
{
	t_check	check;

	if (ft_strcmp(ft_check(argv, argc, &check), "OK") != 0)
		return (ft_error("Error"));
	check.count = 0;
	check.tri = 0;
	ft_sort_a(&check, check.taille1);
	if (TAB1)
		ft_memdel((void **)&TAB1);
	if (TAB2)
		ft_memdel((void **)&TAB2);
	return (0);
}
