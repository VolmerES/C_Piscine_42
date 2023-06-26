/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 22:44:57 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/11 23:32:05 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest,	char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*int main()
{
    char src[] = "Hello, world!";
    char dest[20];

    ft_strcopy(dest, src);

    printf("Cadena de origen: %s\n", src);
    printf("Cadena de destino: %s\n", dest);

    return 0;
}*/
