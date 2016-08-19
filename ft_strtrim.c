/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 20:21:14 by baalbane          #+#    #+#             */
/*   Updated: 2015/12/10 20:09:12 by baalbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	j = 1;
	i = 0;
	len = ft_strlen(s);
	while ((s[len - j] == ' ' || s[len - j] == '\n'
				|| s[len - j] == '\t') && len > j)
		j++;
	if (j == len)
		return ("");
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	len = len - j - i + 2;
	if (!(str = (char *)malloc(sizeof(char) * (len))))
		return (NULL);
	j = 0;
	while ((j + 1) < len)
		str[j++] = (char)s[i++];
	str[j] = '\0';
	return (str);
}
