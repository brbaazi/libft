/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbaazi <brbaazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:42:42 by brbaazi           #+#    #+#             */
/*   Updated: 2024/11/12 16:11:34 by brbaazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	h;

	h = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == h)
			return ((char *)&s[i]);
		i++;
	}
	if (h == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
