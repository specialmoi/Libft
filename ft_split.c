/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthiruma <pthiruma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:15:35 by pthiruma          #+#    #+#             */
/*   Updated: 2023/01/09 19:17:10 by pthiruma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int		elem;
	int		i;
	int		on;

	i = 0;
	elem = 0;
	on = 0;
	while (s[i])
	{
		if (s[i] != c && on == 0)
		{
			on = 1;
			elem++;
		}
		if (s[i] == c && on == 1)
			on = 0;
		i++;
	}
	return (elem);
}

char	**ft_split(char const *s, char c)
{
	char	**pptr;
	int		i;
	int		j;
	int		k;

	pptr = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!pptr)
		return (NULL);
	i = 0;
	k = 0;
	while (k < ft_countwords(s, c))
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			j++;
		}
		pptr[k++] = ft_substr(&s[i - j], 0, j);
	}
	pptr[k] = 0;
	return (pptr);
}
