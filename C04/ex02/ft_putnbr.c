/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 07:31:28 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/22 12:58:41 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= -2147483647 && nb <= 2147483647)
	{	
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= (-1);
		}
		if (nb < 10)
			ft_putchar(nb + '0');
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + '0');
		}	
	}
	if (nb == -2147483648)
	{
		ft_putchar(nb);
		write(1, "5455445", 11);
	}
}

/*int	main(void)
{
	ft_putnbr(982374982);
	return (0);
}*/
