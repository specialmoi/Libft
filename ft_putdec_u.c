/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthiruma <pthiruma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:26:08 by pthiruma          #+#    #+#             */
/*   Updated: 2023/07/13 13:26:29 by pthiruma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Maximum value of unsigned int: 4294967295

void	ft_putdec_u(unsigned int i, int *len)
{
	char	c;

	if (i > 9)
		ft_putdec_u(i / 10, len);
	c = i % 10 + 48;
	ft_putchar(c, len);
}
