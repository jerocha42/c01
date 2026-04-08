/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 00:03:17 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/08 00:17:30 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	first_value;
	int	second_value;

	first_value = *a;
	second_value = *b;
	*a = first_value / second_value;
	*b = first_value % second_value;
}

/*
** int	main(void)
** {
** 	int	first_value;
** 	int	second_value;
** 
** 	first_value = 100;
** 	second_value = 18;
** 	printf("First value: %d\n", first_value);
** 	printf("Second value: %d\n", second_value);
** 	ft_ultimate_div_mod(&first_value, &second_value);
** 	printf("Division result: %d\n", first_value);
** 	printf("Division remainder: %d\n", second_value);
** 	return (0);
** }
** 
*/