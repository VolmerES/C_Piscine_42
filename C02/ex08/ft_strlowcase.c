/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:07:40 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/14 20:05:43 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
		(str[i] = str[i] + 32);
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char str[] = "HOLA";

	printf("El string devuelve %s\n", str);
	ft_strlowcase(str);
	printf("El string devuelve %s\n", str);
	return(0);
}*/
