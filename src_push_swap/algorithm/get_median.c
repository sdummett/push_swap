/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:08:00 by sdummett          #+#    #+#             */
/*   Updated: 2021/09/09 12:42:52 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Compute and return the median of the inital stack A
*/

int	get_median(int *sorted, int nb_elem)
{
	unsigned int	index_median;
	long int		median;

	index_median = (nb_elem + 1) / 2;
	if (index_median % 2 == 0)
		median = (long int)sorted[index_median - 1];
	else
		median = ((long int)sorted[index_median - 1] + \
		(long int)sorted[index_median]) / (long int)2;
	return ((int)median);
}
