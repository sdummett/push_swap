/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_stack_a_into_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 19:27:42 by sdummett          #+#    #+#             */
/*   Updated: 2021/09/04 18:29:48 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_stack_a_int_b(t_stacks *stacks)
{
	while (stacks->nb_elem_a != 2)
	{
		fflush(stdout);
		push_b(stacks);
	}
}
