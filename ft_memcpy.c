/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:57:57 by baalbane          #+#    #+#             */
/*   Updated: 2015/12/10 19:41:15 by baalbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char	*c1;
	char	*c2;

	c1 = (char *)s1;
	c2 = (char *)s2;
	while (n-- > 0)
		*c1++ = *c2++;
	return (s1);
}
