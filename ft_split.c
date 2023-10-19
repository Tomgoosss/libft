/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoossen <tgoossen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:36:13 by tgoossen          #+#    #+#             */
/*   Updated: 2023/10/19 15:49:02 by tgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	stringcounter(char const *s, char c)
{
	int	str;
	int	t;

	t = 0;
	str = 0;
	while (*s != '\0')
	{
		if (*s != c && t == 0)
		{
			str++;
			t = 1;
		}
		if (*s == c)
		{
			t = 0;
		}
		s++;
	}
	return (str);
}

static int	wordleng(char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char **ft_split(char const *s, char c)
{
	int		strings;
	int	i;
	int j;
	char	**str;

	strings = stringcounter(s, c);
	str = malloc((strings + 1) * sizeof(char *));
	i = 0;
	j = 0;

	while (i < strings)
	{
		while (s[j] == c)
		{
			j++;
		}
		str[i] = ft_substr(s, j, wordleng(s, c, j));
		if (str[i] == NULL)
			free(str[i]);
		j += wordleng(s, c, j);
		i++;
	}
	str[i] = NULL;
	return (str);
}

// int main(void)
// {
//     const char *dstr = "dit,is,mijn,,string";
//     char split = ',';
//     char **result;

//     result = ft_split(dstr, split);

//         int i = 0;
//         while (result[i] && i < 5)
//         {
//             printf("%s\n", result[i]);
//             i++;
// 		}
// }