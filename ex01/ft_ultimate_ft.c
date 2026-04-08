/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 23:15:52 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/07 23:41:53 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
** int	main(void)
** {
** 	int	value;
** 	int	*p1;
** 	int	**p2;
** 	int	***p3;
** 	int	****p4;
** 	int	*****p5;
** 	int	******p6;
** 	int	*******p7;
** 	int	********p8;
** 	int	*********p9;
** 	int value_string;
** 
** 	value = 0;
** 	p1 = &value;
** 	p2 = &p1;
** 	p3 = &p2;
** 	p4 = &p3;
** 	p5 = &p4;
** 	p6 = &p5;
** 	p7 = &p6;
** 	p8 = &p7;
** 	p9 = &p8;
** 
** 	printf("Valor inicial: %d\n", value);
** 	ft_ultimate_ft(p9);
** 	printf("Valor final: %d\n", value);
** 
** 	return (0);
** }
*/