/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <smarin-a@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:33:32 by smarin-a          #+#    #+#             */
/*   Updated: 2023/06/04 20:33:38 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	printhf(int f, int c, int x, int y)
{	
	if ((f == 0 && c == 0) || (f == 0 && c == (x - 1)))
	{
		ft_putchar('o');
	}
	else if (((f == y - 1) && c == 0) || ((f == y - 1) && c == (x - 1)))
	{
		ft_putchar('o');
	}
	else if ((c == 0) || (c == (x - 1)))
	{
		ft_putchar('|');
	}
	else if ((f == 0) || (f == (y - 1)))
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)

{
	int	f;
	int	c;

	f = 0;
	c = 0;
	while (f < y)
	{
		while (c < x)
		{
			printhf (f, c, x, y);
			c++;
		}
		ft_putchar('\n');
	f++;
	c = 0;
	}
}
