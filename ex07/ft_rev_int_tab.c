/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:12:43 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/08 22:43:58 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	invert_position(int *tab, int position_a, int position_b)
{
	int	aux;

	aux = tab[position_a];
	tab[position_a] = tab[position_b];
	tab[position_b] = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start_pos;
	int	end_pos;
	int	aux;

	start_pos = 0;
	end_pos = size - 1;
	while (start_pos != end_pos && (end_pos - start_pos) > 0)
	{
		invert_position(tab, start_pos, end_pos);
		start_pos = start_pos + 1;
		end_pos = end_pos - 1;
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
** 	int	array_size;
** 	int	array_int[5] = {1, 12, 123, 1234, 12345};
** 	int	*first_element_addr;
** 
** 	array_size = 5;
** 	first_element_addr = &array_int[0];
** 	print_int_array(first_element_addr, 5);
** 	ft_rev_int_tab(first_element_addr, array_size);
** 	print_int_array(first_element_addr, 5);
** 	return (0);
** }
** 
*/