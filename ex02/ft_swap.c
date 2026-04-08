/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 23:43:36 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/08 14:37:56 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*
** int	main(void)
** {
** 	int	x;
** 	int	y;
** 
** 	x = 10;
** 	y = 20;
** 	printf("Antes da troca: x = %d, y = %d\n", x, y);
** 	ft_swap(&x, &y);
** 	printf("Depois da troca: x = %d, y = %d\n", x, y);
** }
** 
*/
