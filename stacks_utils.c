/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:57:34 by sdummett          #+#    #+#             */
/*   Updated: 2021/08/19 18:10:38 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_stacks *stacks)
{
	unsigned int	i;
	unsigned int	index_a;
	unsigned int	index_b;

	i = 0;
	index_a = stacks->nb_elem_a;
	index_b = stacks->nb_elem_b;
	while (i < stacks->nb_elem_total)
	{
		if (index_a > 0)
		{
			printf("index : %d |", index_a - 1);
			printf("%d", stacks->a[index_a - 1]);
			index_a--;
		}
		else
			printf(" ");
		printf(" ");
		if (index_b > 0)
		{
			printf("%d\n", stacks->b[index_b - 1]);
			index_b--;
		}
		else
			printf(" \n");
		i++;
	}
	printf("b[0]:%d\n", stacks->b[0]);
	printf("           - -\n");
	printf("           a b\n");
}

t_stacks	*create_stacks(int ac)
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(t_stacks));
	stacks->nb_elem_total = ac - 1;
	stacks->nb_elem_a = stacks->nb_elem_total;
	stacks->nb_elem_b = 0;
	stacks->a = malloc(sizeof(int) * stacks->nb_elem_total);
	stacks->b = malloc(sizeof(int) * stacks->nb_elem_total);
	return (stacks);
}

void	init_stacks(t_stacks *stacks, int ac, char **av)
{
	unsigned int	i;

	i = 0;
	while (i != stacks->nb_elem_total)
	{
		stacks->a[i] = ft_atoi(av[ac - 1]);
		ac--;
		i++;
	}
}
