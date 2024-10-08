/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:35:30 by amezoe            #+#    #+#             */
/*   Updated: 2024/09/30 19:37:43 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	letter;
	int	i;

	letter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z'))
		{
			letter = 0;
		}
		i++;
	}
	return (letter);
}

// int main(void)
// {
// 		char str[] = "";

// 	printf("%d", ft_str_is_uppercase(str));
// 	return (0);

// }