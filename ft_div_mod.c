/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:25:47 by amezoe            #+#    #+#             */
/*   Updated: 2024/09/22 15:34:12 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{

	int a;
	int b;
	int div;
	int mod;
	
	a = 30;
	b = 15;
	div = 0;
	mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n", div, mod);

	
}*/