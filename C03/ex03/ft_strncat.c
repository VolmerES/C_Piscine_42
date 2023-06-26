/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:51:45 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/18 20:14:58 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include  <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int	main()
{
	char	d1[20] = "Hola";
	char 	s1[] = " Mundo";

	ft_strncat(d1, s1, 3);
	printf("La cadena concatenda devuelve %s\n", d1);
	return (0);
}*/
