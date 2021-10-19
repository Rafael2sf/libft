/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:06:18 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/19 12:46:16 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dst && src && dstsize > 0)
	{
		while (*(src + i))
		{
			if (i >= (dstsize - 1))
				break ;
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i) = '\0';
		while (*(src + i))
			i++;
	}
	return (i);
}
