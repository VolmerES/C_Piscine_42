/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                                :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:19:52 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/14 21:50:08 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	int lower;
	char str[] = "cwdadGwad";

	lower = ft_str_is_lowercase(str);
	if (lower)
	{
	write(1, "1", 1);
	}
	else
	{
	write(1, "0", 1);
	}
	return(0);
}*/
