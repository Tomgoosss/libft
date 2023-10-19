/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoossen <tgoossen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:03:43 by tgoossen          #+#    #+#             */
/*   Updated: 2023/10/18 11:28:11 by tgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;
	size_t	i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;

	while (d == s)
		return (d);

	while (s[i] != '\0' && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(d);
}

// int main(void)
// {
// 	char source[] = "this is my source that i want to copy";
// 	char dest[50];

// 	printf("%s\n", (char *)ft_memmove(dest, source, 20));
// 	printf("%s\n", (char*)memmove(dest, source, 20));
// }