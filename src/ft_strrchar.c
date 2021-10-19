/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:23:39 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/19 14:39:38 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*res;

	res = NULL;
	if (s)
	{
		tmp = (char *)s;
		while (*tmp)
		{
			if (*tmp == c)
				res = tmp;
			tmp++;
		}
	}
	return (res);
}
