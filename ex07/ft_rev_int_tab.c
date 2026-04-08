/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:12:43 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/08 14:12:52 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	start_pos;
	int	end_pos;
	int	aux;

	start_pos = 0;
	end_pos = size - 1;
	while (start_pos != end_pos && (end_pos - start_pos) > 0)
	{
		aux = tab[start_pos];
		tab[start_pos] = tab[end_pos];
		tab[end_pos] = aux;
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