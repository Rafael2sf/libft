/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:42:00 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/28 11:19:56 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putstr(int fd, char *s)
{
	ssize_t	i;

	i = 0;
	if (!s)
		return (write(fd, "(null)", 6));
	while (*s)
	{
		write(fd, s++, 1);
		i++;
	}
	return (i);
}
