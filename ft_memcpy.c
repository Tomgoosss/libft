/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoossen <tgoossen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:56:28 by tgoossen          #+#    #+#             */
/*   Updated: 2023/10/18 11:28:05 by tgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	unsigned char	*s;
	size_t	i;

	d = (char *)dest;
	s = (unsigned char *)src;
	i = 0;

	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// int	main(void)
// {
// 	unsigned char source[] = "sdsdffds";
// 	char dest[30] = "";
	
// 	ft_memcpy(dest, source, 20);
	
// 	printf("%s\n", dest);
// 	printf("%s", dest);
// }
