/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 01:09:01 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/10 19:29:07 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

//int	main(void)
//{
//	int on;
//	int tw;
//
//	on = 8;
//	tw = 20;
//
//	printf ("el valor de on es %d y el valor de tw es %d \n", on, tw);
//	ft_swap(&on, &tw);
//	printf ("el valor de on es %d y el valor de tw es %d \n", on, tw);
//	return(0);
//}
