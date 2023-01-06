/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:50:54 by alamy-ca          #+#    #+#             */
/*   Updated: 2023/01/06 14:39:34 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	lt;

	lt = c;
	while (*s != '\0')
	{
		if (*s == lt)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && lt == '\0')
		return ((char *)s);
	return (NULL);
}
