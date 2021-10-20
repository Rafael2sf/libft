/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:40:25 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/20 21:44:26 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static char	*ft_strjoin_helper(char const *s1, char const *s2, size_t len)
{
	char	*x;
	char	*y;
	char	*tmp;
	char	*addr;

	x = (char *)(s1);
	y = (char *)(s2);
	tmp = (char *)ft_calloc(sizeof(char), len + 1);
	if (!tmp)
		return (NULL);
	if (len == 1)
		return (ft_strdup(""));
	addr = tmp;
	while (x && *x)
		*tmp++ = *x++;
	while (y && *y)
		*tmp++ = *y++;
	*tmp = '\0';
	return (addr);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*ptr;

	ptr = NULL;
	if (!s1 && !s2)
		return (NULL);
	if (s1 && !s2)
		return (ft_strdup(s1));
	else if (!s1 && s2)
		return (ft_strdup(s2));
	len = ft_strlen(s1);
	ptr = (char *)ft_calloc(sizeof(char), (len + ft_strlen(s2) + 1));
	ft_strlcpy(ptr, s1, len + 1);
	len += ft_strlen(s2);
	ft_strlcat(ptr, s2, len + 1);
	return (ptr);
}
