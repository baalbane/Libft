/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:13:11 by baalbane          #+#    #+#             */
/*   Updated: 2015/12/10 20:08:22 by baalbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**filltab(char **str, char *s, char c)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (s && *s)
	{
		if (*s != c && *s)
		{
			x = 0;
			while (*s != c && *s)
			{
				str[y][x] = *s;
				s++;
				x++;
			}
			str[y][x] = '\0';
			y++;
		}
		else
			s++;
	}
	str[y] = NULL;
	return (str);
}

static char	**gomalloc(int x, int y)
{
	char	**str;
	int		i;

	i = 0;
	if (!(str = (char **)malloc(sizeof(char *) * (y + 1))))
		return (NULL);
	while (i < y)
	{
		if (!(str[i++] = (char *)malloc(sizeof(char) * (x + 1))))
			return (NULL);
	}
	return (str);
}

static char	**getab(char *s, char c)
{
	int		tmp;
	int		lenx;
	int		leny;

	lenx = 0;
	leny = 0;
	tmp = 0;
	while (*s)
	{
		if (*s != c)
		{
			tmp = 0;
			leny++;
			while (*s != c && *s)
			{
				s++;
				tmp++;
			}
			if (tmp > lenx)
				lenx = tmp;
		}
		else
			s++;
	}
	return (gomalloc(lenx, leny));
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;

	if (!(str = getab((char *)s, c)))
		return (NULL);
	return (filltab(str, (char *)s, c));
}
