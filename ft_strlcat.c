/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:20:03 by alamy-ca          #+#    #+#             */
/*   Updated: 2023/01/05 15:38:27 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idest;
	size_t	isrc;
	size_t	result;

	idest = ft_strlen(dst);
	isrc = ft_strlen(src);
	if (dstsize <= idest)
		result = isrc + dstsize;
	else
		result = isrc + idest;
	while (*src != '\0' && (idest + 1) < dstsize)
	{
		dst[idest] = *src;
		idest++;
		src++;
	}
	dst[idest] = '\0';
	return (result);
}
