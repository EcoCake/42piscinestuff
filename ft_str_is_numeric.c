/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:11:44 by amezoe            #+#    #+#             */
/*   Updated: 2024/09/30 19:21:03 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	number;
	int	i;

	number = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || (str[i] > '9'))
		{
			number = 0;
		}
		i++;
	}
	return (number);
}

// int main(void)
// {
// 	char str[] = "69";

// 	printf("%d", ft_str_is_numeric(str));
// 	return (0);

// }
