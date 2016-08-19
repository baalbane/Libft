/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:12:15 by baalbane          #+#    #+#             */
/*   Updated: 2015/12/10 20:05:57 by baalbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = dst;
	i = 0;
	while (*src && i++ < n)
		*dst++ = *src++;
	while (i++ < n)
		*dst++ = '\0';
	return (tmp);
}
