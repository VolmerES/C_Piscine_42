/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:24:11 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/14 19:38:48 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	char str[] = "HJ";
	int upper;

	upper = ft_str_is_uppercase(str);
	if(upper)
	{
		write(1, "1", 1);
	}
	else
	{
		write(1, "0", 1);
	}
	return(0);
}*/
