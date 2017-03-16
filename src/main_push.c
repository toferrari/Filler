/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:48:49 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/15 20:19:58 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int			ft_error(char *error)
{
	ft_putendl(error);
	return (0);
}

int				main(int argc, char **argv)
{
	t_check	check;

	if (ft_strcmp(ft_check(argv, argc, &check), "OK") != 0)
		return (ft_error("Error"));
	ft_push_swap(&check);
	return (0);
}
