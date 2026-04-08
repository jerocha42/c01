/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 23:53:34 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/08 00:01:33 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
** int	main(void)
** {
** 	int	a;
** 	int	b;
** 	int	div;
** 	int	mod;
** 
** 	a = 10;
** 	b = 3;
** 	ft_div_mod(a, b, &div, &mod);
** 	printf("a: %d\n", a);
** 	printf("b: %d\n", b);
** 	printf("div: %d\n", div);
** 	printf("mod: %d\n", mod);
** 	return (0);
** }
** 
*/