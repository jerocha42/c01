/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 00:18:34 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/08 11:40:51 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

/*
** To print the correct size of the strings it's necessary to get the string size
** To do it we need to go through the string until 
** the char that indicates the end
*/
void	ft_putstr(char *str)
{
	int	str_size;

	str_size = 0;
	while (str[str_size] != '\0')
	{
		str_size = str_size + 1;
	}
	write(1, str, str_size);
}

/*
** Strings in C are allocated as an Array of chars.
** For read-only strings it can be declared on a pointer variable. 
** (Those vars cannot be changed)
** For strings that need to be changed use char my_string[]
** (Arrays that are sent as function parameters behave as pointers)
*/
/*
** int	main(void)
** {
** 	char	*mensagem;
** 
** 	mensagem = "Escrita em baixo nível com write!\n";
** 	ft_putstr(mensagem);
** 	return (0);
** }
** 
*/