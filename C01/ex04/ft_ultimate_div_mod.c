/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:12:44 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/11 20:21:16 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	f;

	d = *a;
	f = *b;
	*a = d / f;
	*b = d % f;
}
/*int main(void)
{
	int a;
	int b;

	a = 20;
	b = 10;
	ft_ultimate_div_mod(&a, &b);	
	printf("El valor de a es %d \n", a);
	printf("El valor de b es %d \n", b);
	return(0);
}*/
