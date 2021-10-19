/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:23:39 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/19 12:47:05 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	if (s)
	{
		tmp = (char *)s;
		while (*tmp)
			tmp++;
		while (tmp != s)
		{
			if (*tmp == c)
				return (tmp);
			tmp--;
		}
	}
	return (NULL);
}
