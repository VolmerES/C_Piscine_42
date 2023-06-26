/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:53:35 by jdelorme          #+#    #+#             */
/*   Updated: 2023/06/14 19:32:01 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		if ((str[iterator] >= 'a' && str[iterator] <= 'z')
			|| (str[iterator] >= 'A' && str[iterator] <= 'Z'))
		{
			iterator++;
		}
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello World!";
    char str3[] = "+-2fd4";
    
    printf("Is '%s' alphabetic? %s\n",
   	str1, ft_str_is_alpha(str1) ? "Yes" : "No");
    printf("Is '%s' alphabetic? %s\n",
   	str2, ft_str_is_alpha(str2) ? "Yes" : "No");
    printf("Is '%s' alphabetic? %s\n",
   	str3, ft_str_is_alpha(str3) ? "Yes" : "No");
    
    return 0;
}*/
