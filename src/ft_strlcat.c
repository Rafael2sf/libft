/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:54:25 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/18 18:07:48 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src || dstsize == 0)
		return (ft_strlen(dst) + 1 + ft_strlen(src));
	while (*dst)
		i++;
	if (i >= (dstsize + 1))
		return (i + ft_strlen(dst));
	else
		ft_memcpy((void *)(dst + i), (const void *)(src), dstsize - i);
	return (ft_strlen(dst) + 1);
}
