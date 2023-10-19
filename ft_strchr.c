/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoossen <tgoossen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:27:25 by tgoossen          #+#    #+#             */
/*   Updated: 2023/10/18 11:28:19 by tgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (c != s[i])
	{
		i++;
	}
	return (&s[i]);
}

// int main(void)
// {
// 	int c = 'l';
// 	char *a1 = ft_strchr("hello", c);
// 	char *a2 = strchr("hello", c);

// 	printf("%c\n", *a1);
// 	printf("%c", *a2);
// }