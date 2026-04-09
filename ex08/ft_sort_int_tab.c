/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:34:59 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/08 22:12:38 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

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

void	ft_sort_int_tab(int *tab, int size)
{
	if (size > 0)
	{
		sort_pairs(tab, size);
		ft_sort_int_tab(tab, size - 1);
	}
}

/*
** void	print_int_array(int *tab, int size)
** {
** 	int	i;
** 
** 	i = 0;
** 	while (i < size)
** 	{
** 		printf("%d, ", tab[i]);
** 		i = i + 1;
** 	}
** 	printf("\n");
** }
** 
** int	main(void)
** {
** 	int	int_array[10] = {5, 3, 7, 8, 1, 2, 0, 4, 9, 6};
** 
** 	print_int_array(&int_array[0], 10);
** 	ft_sort_int_tab(&int_array[0], 10);
** 	print_int_array(&int_array[0], 10);
** 	return (0);
** }
** 
*/