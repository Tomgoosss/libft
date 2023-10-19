/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoossen <tgoossen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:06:48 by tgoossen          #+#    #+#             */
/*   Updated: 2023/10/18 11:28:27 by tgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*fake;
	size_t	lengs;
	size_t	i;

	lengs = ft_strlen(s);
	fake = (char *)malloc(lengs);
	i = 0;
	while (i < lengs)
	{
		fake[i] = s[i];
		i++;
	}
	return (fake);
}

// int main(void)
// {
// 	const char original[] = "copy this";
// 	char *fake = ft_strdup(original); 
// 	ft_strdup(original);
// 	printf("%s", fake);
// }