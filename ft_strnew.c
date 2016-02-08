/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:45:57 by baalbane          #+#    #+#             */
/*   Updated: 2015/12/10 20:12:16 by baalbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*b;

	if (!(b = (char*)malloc(size + 1)))
		return (NULL);
	ft_memset(b, '\0', size + 1);
	return (b);
}
