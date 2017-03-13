/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 14:55:33 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/13 10:36:55 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"
#include "get_next_line.h"

int			ft_error(char *error)
{
	ft_putendl(error);
	return(0);
}

static char	*checkin(char **argv, int ac, t_check *check)
{
	int		i;
	int		j;

	j = 1;
	if (!(check->tab1 = ft_intmal(ac)) || !(check->tab2 = ft_intmal(ac)))
		return ("Error");
	while (j < ac)
	{
		i = 0;
		while (argv[j][i])
		{
			if (!(ft_isdigit(argv[j][i])))
			{
				ft_memdel((void **)&check->tab1);
				return ("Error");
			}
			i++;
		}
		check->tab1[j - 1] = ft_atoi(argv[j]);
		j++;
	}
	check->taille1 = ac - 1;
	return ("OK");
}

static char	*checkdouble(t_check check)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i < check.taille1)
	{
		while (j < check.taille1)
		{
			if (check.tab1[i] == check.tab1[j])
				return ("Error");
			j++;
		}
		j = ++i + 1;
	}
	return ("OK");
}

int			main(int argc, char **argv)
{
	t_check		check;
	int			ret;
	char		*order;

	check.taille2 = 0;
	if (ft_strcmp(checkin(argv, argc, &check), "OK") != 0 ||
	ft_strcmp(checkdouble(check), "OK") != 0)
		return (ft_error("Error"));
	while ((ret = get_next_line(0, &order)) == 1)
	{
		ft_checker(order, &check);
		ft_memdel((void **)&order);
	}
	return (0);
	//ft_checker(tab1, tab2, j, order);
}
