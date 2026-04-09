/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:12:43 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/08 20:36:14 by jerocha-         ###   ########.fr       */
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
** int	main(void)
** {
** 	int	array_size;
** 	int	array_int[5];
** 	int	*first_element_addr;
** 	int	i;
** 
** 	array_size = 5;
** 	array_int[0] = 1;
** 	array_int[1] = 12;
** 	array_int[2] = 123;
** 	array_int[3] = 1234;
** 	array_int[4] = 12345;
** 	first_element_addr = &array_int[0];
** 	ft_rev_int_tab(first_element_addr, array_size);
** 	i = 0;
** 	while (i < array_size)
** 	{
** 		printf("%d, ", first_element_addr[i]);
** 		i = i + 1;
** 	}
** 	printf("\n");
** 	return (0);
** }
** 
*/