/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:50:17 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/14 23:57:49 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{	
		if (!(c[i] >= 32 && c[i] <= 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	int print;
	char c[] = "kjanddj";

	print = ft_str_is_printable(c);
	if(print)
	{
	write(1, "1", 1);
	}
	else
	{
	write(1, "0", 1);
	}
	return(0);
}*/
