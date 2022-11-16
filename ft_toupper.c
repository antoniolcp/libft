/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy-ca <alamy-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:19:23 by alamy-ca          #+#    #+#             */
/*   Updated: 2022/11/16 15:30:03 by alamy-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/* #include <stdio.h>
#include <ctype.h>
int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, toupper(c));

    c = 'a';
    printf("\n%c -> %c", c, toupper(c));

    c = '8';
    printf("\n%c -> %c", c, toupper(c));
    return 0;
} */