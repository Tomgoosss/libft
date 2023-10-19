/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoossen <tgoossen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:25:42 by knockla           #+#    #+#             */
/*   Updated: 2023/10/18 14:11:12 by tgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*countm;
	size_t	lengs;
	size_t	i;

	countm = (char *)malloc((len +1) * sizeof(char));
	lengs = ft_strlen(s);
	i = 0;
	if (lengs < start || len == 0 || lengs == 0 || countm == 0)
		return (0);

	while (i < len) 
	{
		countm[i] = s[i + start];
		i++;
	}
	countm[i] = '\0';
	return (countm);
}

// int main(void)
// {
// 	char *str = "hallo dit is het begin";
// 	unsigned int start = 5;
// 	size_t len = 8;

// 	char *substring = ft_substr(str, start, len);

// 	printf("%s\n", substring); 
// }