/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 14:55:33 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/11 18:50:53 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

int		ft_error(char *error)
{
	ft_putendl(error);
	return(0);
}

char	*checkin(char **argv, int ac, t_check *check)
{
	int		i;
	int		j;

	j = 1;
	if (!(check->tab1 = ft_intmal(ac)))
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
		check->tab1[j - 1] = ft_atoi(argv[j - 1]);
		j++;
	}
	return ("OK");
}

int		main(int argc, char **argv)
{
	t_check		check;

	check.tab2 = NULL;
	if (ft_strcmp(checkin(argv, argc, &check), "OK") != 0)
		return (ft_error("Error"));
	ft_putstr("OK");
	return (0);
	//ft_checker(tab1, tab2, j, order);
}
