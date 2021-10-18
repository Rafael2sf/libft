/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:33:19 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/18 12:07:45 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	i;

	printf("@42 Running libft tester by rafernan, dont forget to run norm! @42\n\n");
	i = -275;
	printf("Cheking (ft_is...)\n");
	while (i != 275)
	{
		if ((ft_isalpha(i) != isalpha(i)) 
		|| (ft_isdigit(i) != isdigit(i))
		|| (ft_isalnum(i) != isalnum(i))
		|| (ft_isascii(i) != isascii(i))
		|| (ft_isprint(i) != isprint(i))
		)
		{
			printf("\tFailure! (%d)\n", i);
		}
		i++;
	}
	printf("\t+Aproved!\n");
	return (0);
}
