/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:46:02 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/22 18:32:00 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
	nb = nb * ft_recursive_factorial(nb -1);
	}
	return (nb);
}

/*int	main()
{
	int	fac;

	fac  = ft_recursive_factorial(5);
	printf("El factorial es %d\n", fac);
	return (0);
}*/
