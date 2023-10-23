/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoossen <tgoossen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:03:36 by tgoossen          #+#    #+#             */
/*   Updated: 2023/10/23 16:36:34 by tgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;

	while (i + 1 < n)
	{
		i++;
		if (str1[i] > str2[i])
			return (+1);
		if (str1[i] < str2[i])
			return (-1);
	}
	return (0);
}

// int main()
// {
// 	char str1[] = "woerd1";
// 	char str2[] = "woord2";
	
// 	printf("%i\n", ft_memcmp(str1, str2, 2));
// 	printf("%i\n", memcmp(str1, str2, 2));
	
// }