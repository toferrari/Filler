/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 17:18:55 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/15 17:48:29 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			*ft_intmal(int len)
{
	int		*tab;

	if (!(tab = (int *)malloc((len + 1) * sizeof(int))))
		return (NULL);
	return (tab);
}
