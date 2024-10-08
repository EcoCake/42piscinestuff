/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:39:43 by amezoe            #+#    #+#             */
/*   Updated: 2024/09/30 20:23:00 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	printable;
	int	i;

	printable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			printable = 0;
		}
		i++;
	}
	return (printable);
}

// int main(void)
// {
// 		char str[] = "dfgf";

// 	printf("%d", ft_str_is_printable(str));
// 	return (0);
// }