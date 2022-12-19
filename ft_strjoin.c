/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:30:38 by alamy-ca          #+#    #+#             */
/*   Updated: 2022/12/19 15:39:01 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (str == NULL)
		return (NULL);
	
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;  
	}
	
	while (s2[i] != '\0')
	{
		str[i + j] = s2[i];
		i++;
	}
	
	str[i + j] = '\0';
	return (str);
}

#include <stdio.h>

int main ()
{
   char a[2] = {'H', 'e'};
   printf("String: %s\n", a );
   return 0;
}
