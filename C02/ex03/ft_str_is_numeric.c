/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:36:48 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/14 19:36:58 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	char str[] = "12323";
	int numeric = ft_str_is_numeric(str);

	if (numeric)
	{
	write(1, "1", 1);
	}
	else
	{
	write(1, "0", 1);
	}
	return(0);
}*/
