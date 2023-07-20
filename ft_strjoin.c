/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthiruma <pthiruma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:34:42 by pthiruma          #+#    #+#             */
/*   Updated: 2023/07/13 13:30:21 by pthiruma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*ptr;
	unsigned int	size;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s2)
		return ((char *)s1);
	size = ft_strlen(s1) + ft_strlen(s2);
	ptr = (unsigned char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i++])
		ptr[i] = s1[i];
	while (s2[j++])
		ptr[i++] = s2[j];
	ptr[i] = '\0';
	return ((char *) ptr);
}
