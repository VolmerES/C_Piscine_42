/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:12:25 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/18 20:45:36 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && *s2 != '\0') && s1[i] == s2[i])
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}

/*int main()
{
	int ret = 0;
	
	ret = ft_strcmp("abc","abc");
	printf("el valor de ret es %d\n", ret);
	
	ret = ft_strcmp("aca","adc");
	printf("el valor de ret es %d\n", ret);
	
	ret = ft_strcmp("aDADWADbc","abc");
	printf("el valor de ret es %d\n", ret);

	ret = strcmp("abc","abc");
	printf("el valor de ret es %d\n", ret);
	
	ret = strcmp("abc","abc");
	printf("el valor de ret es %d\n", ret);
	
	ret = strcmp("aca","adc");
	printf("el valor de ret es %d\n", ret);
	

	return (0);
}*/
