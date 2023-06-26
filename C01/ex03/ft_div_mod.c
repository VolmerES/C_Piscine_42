/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 02:18:37 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/11 20:19:11 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main (void)
//{
//	int a;
//	int b;
//	int vid;
//	int dom;
//	
//	a = 20;
//	b = 10;
//
//	ft_div_mod(a, b, &vid, &dom);
//
//	printf("el valor de a es %d y el valor de b es %d \n", dom, vid);
//	return(0);
//}
