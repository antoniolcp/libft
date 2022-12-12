/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:38 by alamy-ca          #+#    #+#             */
/*   Updated: 2022/11/29 17:49:41 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;

	i = 0;
	if (siz == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < siz - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < siz)
		dst[i] = 0;
	while (src[i] != 0)
		i++;
	return (i);
}
