/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoossen <tgoossen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:21:12 by tgoossen          #+#    #+#             */
/*   Updated: 2023/10/19 16:07:14 by tgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c <= '9' && c >= '0'))
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
// 	int word1 = ft_isalnum('*');
// 	int word2 = isalnum('*');

// 	printf("%i\n", word1);
// 	printf("%i", word2);
// }