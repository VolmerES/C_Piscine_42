/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:58:46 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/22 12:57:03 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_counter(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		k = i;
		while (str[k] == to_find[j])
		{
			if (j == ft_counter(to_find) - 1)
			{
				return (&str[i]);
			}
			j++;
			k++;
		}
		j = 0;
		i++;
	}
	return (0);
}

/*int main()
{
    char str[] = "Hola mundo,en cuarenta y dos estamos";
    char find[] = "do";
    
    printf("Imprime %s\n", ft_strstr(str, find));
    return (0);
}*/
