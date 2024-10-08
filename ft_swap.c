/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:13:47 by amezoe            #+#    #+#             */
/*   Updated: 2024/09/22 15:22:17 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int main(void)
{
	int x;
	int y;
	
	x = 13;
	y = 37;
	
	ft_swap(&x, &y);
	
printf("%d\n", x);
printf("%d", y);


    
}*/