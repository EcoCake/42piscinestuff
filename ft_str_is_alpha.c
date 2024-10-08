/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:58:50 by amezoe            #+#    #+#             */
/*   Updated: 2024/09/30 19:22:08 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	letter;
	int	i;

	letter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			letter = 0;
		}
		i++;
	}
	return (letter);
}

// int	main(void)
// {
// 	char str[] = "dkjfhsdjhf";

// 	printf("%d", ft_str_is_alpha(str));
// 	return (0);
// }