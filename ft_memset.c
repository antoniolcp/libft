/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:35:45 by alamy-ca          #+#    #+#             */
/*   Updated: 2022/11/14 17:26:59 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[50];

	strcpy(str, "This is string.h library function");
	puts(str);

	memset(str, '$', 30);
	puts(str);

	return (0);
} */