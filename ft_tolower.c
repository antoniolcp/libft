/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:31:34 by alamy-ca          #+#    #+#             */
/*   Updated: 2022/11/16 15:38:01 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/* #include <stdio.h>
#include <ctype.h>
int main()
{
    char c, result;

    c = 'M';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = 'A';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = '8';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    return 0;
} */