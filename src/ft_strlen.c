/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:35:02 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/18 13:51:38 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int		i;
	char	*cp;

	i = 0;
	cp = (char *)(s);
	while (cp && *cp)
	{
		cp++;
		i++;
	}
	return (i);
}