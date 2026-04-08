/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:42:22 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/08 12:06:03 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	string_size;

	string_size = 0;
	while (str[string_size] != '\0')
	{
		string_size = string_size + 1;
	}
	return (string_size);
}

/*
** int	main(void)
** {
** 	char	*my_string;
** 	int		string_size;
** 
** 	my_string = "My beautiful and incredible string";
** 	string_size = ft_strlen(my_string);
** 	printf("String size: %d\n", string_size);
** 	return (0);
** }
** 
*/