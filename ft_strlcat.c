/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:38:10 by baalbane          #+#    #+#             */
/*   Updated: 2015/12/10 20:02:51 by baalbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t lenmax;

	i = 0;
	while (dst[i] && i < size)
		i++;
	lenmax = i;
	while (src[i - lenmax] && i < (size - 1))
	{
		dst[i] = src[i - lenmax];
		i++;
	}
	if (lenmax < size)
		dst[i] = '\0';
	return (lenmax + ft_strlen(src));
}
