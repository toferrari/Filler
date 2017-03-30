/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 18:27:29 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/30 17:00:23 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

static char		*ft_check_in(char **argv, int ac, t_check *check)
{
	int		i;
	int		j;

	j = 0;
	check->count = 0;
	while (++j < ac)
	{
		i = 0;
		while (argv[j][i])
		{
			while (argv[j][i] && argv[j][i] == ' ')
				i++;
			if (ft_isdigit(argv[j][i]) || (argv[j][i] == '-' &&
			ft_isdigit(argv[j][i + 1])))
			{
				i += ft_intlen(ft_atoi(&argv[j][i]));
				if (argv[j][i] && argv[j][i] != ' ')
					return ("Error");
				check->count++;
			}
			else if (argv[j][i])
				return ("Error");
		}
	}
	return ("OK");
}

static void		ft_init_tab(char **argv, int ac, t_check *check)
{
	int		i;
	int		j;

	j = 1;
	check->count = 0;
	while (j < ac)
	{
		i = 0;
		while (argv[j][i])
		{
			while (argv[j][i] && argv[j][i] == ' ')
				i++;
			if (ft_isdigit(argv[j][i]) || (argv[j][i] == '-' &&
			ft_isdigit(argv[j][i + 1])))
			{
				check->tab1[check->count] = ft_atoi(&argv[j][i]);
				i += ft_intlen(check->tab1[check->count]);
				check->count++;
			}
		}
		j++;
	}
}

char			*ft_check(char **argv, int ac, t_check *check)
{
	if (ft_strcmp(ft_check_in(argv, ac, check), "OK") != 0
	|| !(check->tab1 = ft_intmal(check->count))
	|| !(check->tab2 = ft_intmal(check->count)))
		return ("Error");
	ft_init_tab(argv, ac, check);
	check->taille1 = check->count;
	return ("OK");
}
