/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:39:28 by amezoe            #+#    #+#             */
/*   Updated: 2024/10/07 18:47:45 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb != 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_iterative_factorial(3));
// 	return(0);
// }
