/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:10:43 by sdummett          #+#    #+#             */
/*   Updated: 2021/09/09 13:56:57 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** Instruction : rra
*/

void	reverse_rotate_a(t_stacks *stacks)
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
