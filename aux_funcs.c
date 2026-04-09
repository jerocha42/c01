/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:23:01 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/08 22:03:07 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "aux_funcs.h"

void	print_int_array(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i = i + 1;
	}
	printf("\n");
}

void	invert_position(int *tab, int position_a, int position_b)
{
	int	aux;

	aux = tab[position_a];
	tab[position_a] = tab[position_b];
	tab[position_b] = aux;
}

void	sort_pairs(int *tab, int size)
{
	int	left;
	int	right;

	left = 0;
	right = 1;
	while (right < size)
	{
		if (tab[left] > tab[right])
		{
			invert_position(tab, left, right);
		}
		left = left + 1;
		right = right + 1;
	}
}

void	bubble_sort(int *tab, int size)
{
	if (size > 0)
	{
		sort_pairs(tab, size);
		bubble_sort(tab, size - 1);
	}
}
