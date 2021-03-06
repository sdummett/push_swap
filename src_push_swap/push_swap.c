/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:39:16 by sdummett          #+#    #+#             */
/*   Updated: 2021/09/09 12:09:04 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Entry point of push_swap program
*/

int	main(int ac, char **av)
{
	t_stacks	*stacks;

	if (ac < 2)
		return (0);
	check_errors_on_args(ac, av);
	stacks = create_stacks(ac);
	check_errors_on_stacks_init(stacks, ac, av);
	check_errors_on_duplicates(stacks);
	if (is_sorted(stacks) == true)
		clean_exit(stacks, 0);
	if (stacks->nb_elem_a <= 3)
		three_elements_sort(stacks);
	else if (stacks->nb_elem_a <= 5)
		five_elements_sort(stacks);
	else
		circular_sort(stacks);
	clean_exit(stacks, 0);
}
