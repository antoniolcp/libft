/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:52:18 by alamy-ca          #+#    #+#             */
/*   Updated: 2023/01/06 14:23:48 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*str;

	i = 0;
	size = ft_strlen(s);
	if (start >= size || !len)
		return (ft_strdup(""));
	if ((len + start) < size)
		size = len;
	else
		size = size - start;
	str = malloc(sizeof(char) * (size + 1));
	s = s + start;
	while (s[i] && size--)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
