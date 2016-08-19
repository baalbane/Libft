/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:29:23 by baalbane          #+#    #+#             */
/*   Updated: 2015/12/10 19:38:10 by baalbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*b;

	b = (unsigned char *)malloc(size);
	if (b == NULL)
		return (NULL);
	ft_memset((void *)b, 0, size);
	return ((void *)b);
}
