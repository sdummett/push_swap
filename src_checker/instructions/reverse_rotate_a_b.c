/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:18:02 by sdummett          #+#    #+#             */
/*   Updated: 2021/09/09 13:55:51 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** Instruction : rrr
*/

void	rrr_reverse_rotate_a(t_stacks *stacks)
{
	int				tmp;
	unsigned int	i;

	if (stacks->nb_elem_a < 2)
		return ;
	i = 0;
	tmp = stacks->a[i];
	while (i < stacks->nb_elem_a - 1)
	{
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	stacks->a[i] = tmp;
}

void	rrr_reverse_rotate_b(t_stacks *stacks)
{
	int				tmp;
	unsigned int	i;

	if (stacks->nb_elem_b < 2)
		return ;
	i = 0;
	tmp = stacks->b[i];
	while (i < stacks->nb_elem_b - 1)
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	stacks->b[i] = tmp;
}

void	reverse_rotate_a_b(t_stacks *stacks)
{
	rrr_reverse_rotate_a(stacks);
	rrr_reverse_rotate_b(stacks);
}
