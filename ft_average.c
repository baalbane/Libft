/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_average.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 16:47:48 by baalbane          #+#    #+#             */
/*   Updated: 2016/01/15 15:38:03 by baalbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_average(int *tab, size_t n)
{
	int			total;
	size_t		i;

	total = 0;
	i = 0;
	while (i < n)
		total = total + tab[i++];
	return (total / i);
}
