/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:52:18 by alamy-ca          #+#    #+#             */
/*   Updated: 2022/12/15 16:29:57 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i]; 
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int main()
{
	char src[] = "substr function Implementation";
	
	int start = 9;
	int len = 14;
	
	char* dest = ft_substr(src, start, len);
	
	printf("%s\n", dest);
	
	return 0;
} */
