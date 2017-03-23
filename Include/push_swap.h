/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:51:08 by tferrari          #+#    #+#             */
/*   Updated: 2017/03/23 16:56:18 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef	struct	s_struct
{
	int			*tab1;
	int			taille1;
	int			*tab2;
	int			taille2;
	int			count;
	char		*str;
	int			tri;
}				t_check;

void			ft_sort_a(t_check *check, int len);
void			ft_swap1(int **tab, int taille);
void			ft_swap2(t_check *check);
void			ft_push(t_check *check, char c);
void			ft_swap_tab_r(int **tab, int taille);
void			ft_swap_tab_l(int **tab, int taille);
void			ft_rotate(int **tab, int taille);
void			ft_rotate2(t_check *check);
void			ft_rotate_reverse(int **tab, int taille);
void			ft_rotate_reverse2(t_check *check);
char			*ft_check(char **argv, int ac, t_check *check);
void			ft_write_order(t_check *check, char *order);
void			ft_checker(char *order, t_check *check);
char			*ft_check_end(t_check check);

#endif
