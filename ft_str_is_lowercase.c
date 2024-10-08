/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:24:08 by amezoe            #+#    #+#             */
/*   Updated: 2024/09/30 19:34:44 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	letter;
	int	i;

	letter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || (str[i] > 'z'))
		{
			letter = 0;
		}
		i++;
	}
	return (letter);
}

// int main(void)
// {
// 	char str[] = "dkjfhFGHFGHFGHFGHFGHFGHFGHFGHFGHFGHFGHsdjhf";

// 	printf("%d", ft_str_is_lowercase(str));
// 	return (0);

// }