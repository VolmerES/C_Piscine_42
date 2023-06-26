/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:29:24 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/10 18:35:14 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	echo(int a, int b)
{
	char	c;

		c = '0' + (a / 10);
	write (1, &c, 1);
		c = '0' + (a % 10);
	write (1, &c, 1);
	write (1, " ", 1);
		c = '0' + (b / 10);
	write (1, &c, 1);
		c = '0' + (b % 10);
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			echo (a, b);
			if (a == 98 && b == 99)
			{
				return ;
			}
			write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
//int	 main()
//{
//	ft_print_comb2();
//	return (0);
//}
