/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:49:00 by alamy-ca          #+#    #+#             */
/*   Updated: 2022/12/12 16:13:46 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	res;
	long	sign;
	unsigned int i;
	
	res = 0;
	sign = 1;
	i = 0;
	
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] '\r' || str[i] '\v' || str[i] == '\f')
	i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
		i++;
	}
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	
	return ((int)(res * sign));
}

#include <stdlib.h>
#include <stdio.h>
 
int main(void)
{
    int i;
    char *s;
 
    s = " -9885";
    i = atoi(s);     /* i = -9885 */
 
    printf("i = %d\n",i);
}
 
/*******************  Output should be similar to:  ***************
 
i = -9885
*/