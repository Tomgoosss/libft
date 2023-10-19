/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoossen <tgoossen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:42:54 by tgoossen          #+#    #+#             */
/*   Updated: 2023/10/18 11:29:30 by tgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	int c = 'l';
// 	char *a1 = ft_strrchr("hello", c);
// 	char *a2 = strrchr("hello", c);

// 	printf("%c\n", *a1);
// 	printf("%c", *a2);
// }