/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:56:23 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/22 20:36:37 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	x = 2;
	while ((x <= nb) && ((nb % x) != 0))
	{
		x++;
		if (x == nb)
			return (1);
	}
	return (0);
}
/*int	main()
{
	int x;

	x = ft_is_prime(999982);
	printf("El numero devuelve %d\n", x);
	return (0);
}*/
