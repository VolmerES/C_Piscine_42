/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:47:43 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/15 16:09:16 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	size_of(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	s = size - 1;
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < s)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size_of(src));
}

/*int main ()
{
	char src[] = "Hola Mundo";
	char dest[9] = "azuaje";
	unsigned int size = sizeof(dest);

	ft_strlcpy(dest, src, size);
	printf("El valor de src es %s\n", src);
	printf("El valor de dest es %s\n", dest);
	printf("El valor de size es %u\n", size);

return(0);
}*/
