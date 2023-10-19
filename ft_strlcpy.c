/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoossen <tgoossen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:06:21 by tgoossen          #+#    #+#             */
/*   Updated: 2023/10/18 11:29:08 by tgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size )
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (src[i] != '\0' && size != i)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[l] != '\0')
	{
		l++;
	}
	return (l);
}
// int	main(void)
// {
// 	char source[] = "copyfdsf";
// 	char dest[30] = "";

// 	printf("%zu\n", ft_strlcpy(dest, source, 20));
// 	printf("%zu", strlcpy(dest, source, 20));
// }
