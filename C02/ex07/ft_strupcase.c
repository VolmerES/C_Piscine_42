/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:17:54 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/14 20:04:22 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
		str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main()
{
	char str[] = "hola";
	
	printf("Le string devuelve %s\n", str);
	ft_strupcase(str);
	printf("Le string devuelve %s\n", str);
	return(0);
}*/
