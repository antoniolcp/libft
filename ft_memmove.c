/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:54:22 by alamy-ca          #+#    #+#             */
/*   Updated: 2022/11/14 17:24:49 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	nb;

	nb = n;
	if (src >= dest)
		return (ft_memcpy(dest, src, n));
	else
		while (nb--)
			((char *)dest)[nb] = ((char *)src)[nb];
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[] = "oldstring";
	const char src[] = "newstring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	return (0);
} */