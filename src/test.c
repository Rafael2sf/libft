/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:33:19 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/18 18:07:17 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	int	i;

	printf("@42student Running libft tester by rafernan, dont forget to run norm!\n\tWon't verify null inputs - @42student\n\n");

	i = -275;
	printf("Cheking ft_is...");
	while (i != 275)
	{
		if ((ft_isalpha(i) != isalpha(i)) 
		|| (ft_isdigit(i) != isdigit(i))
		|| (ft_isalnum(i) != isalnum(i))
		|| (ft_isascii(i) != isascii(i))
		|| (ft_isprint(i) != isprint(i))
		)
		{
			printf("\tFailure! (ft_is...?)(value: %d)\n", i);
			exit(1);
		}
		i++;
	}
	printf("\t+Aproved!\n");

	printf("Cheking ft_strlen");
	if (ft_strlen("Hello World") != strlen("Hello World")
		|| ft_strlen("\0") != strlen("\0")
		|| ft_strlen("Abc\0Def\0") != strlen("Abc\0Def\0")
		|| ft_strlen("42") != strlen("42")
		|| ft_strlen("1") != strlen("1")
		)
	{
		printf("\t-Nope\n");	
		exit(2);
	}

	printf("\t+Aproved!\n");

	char b1[42];
	char b2[42];
	i = 0;
	memset(b1, '\0', 42);
	memset(b2, '\0', 42);
	printf("Cheking ft_memset");
	while (i < 41)
	{
		ft_memset(b1, 'a', i);
		memset(b2, 'a', i);
		if (strcmp(b1, b2) != 0)
		{
			printf("\t-Nope\n");	
			exit(3);		
		}
		i++;
	}
	
	printf("\t+Aproved!\n");

	printf("Cheking ft_bzero");
	b1[41] = '\0';
	b2[41] = '\0';
	while (i > 0)
	{
		ft_bzero(b1 + i, 41 - i);
		bzero(b2 + i, 41 - i);
		if (strcmp(b1, b2) != 0)
		{
			printf("\t-Nope\n");	
			exit(4);		
		}
		i--;
	}

	printf("\t+Aproved!\n");

	printf("Cheking ft_memset");
	while (i != 41)
	{
		ft_memset(b1, 'a', i);
		memset(b2, 'a', i);
		ft_memcpy(b1, b2, i);
		memcpy(b2, b1, i);
		i++;
		if (strcmp(b1, b2) != 0)
		{
			printf("\t-Nope\n");	
			exit(5);		
		}
	}
	printf("\t+Aproved!\n");
	printf("ft_memmove\tskipped\n");

	printf("Cheking ft_strlcpy");
	while(i >= 0)
	{
		ft_memset(b2, 'c', 41 - i);
		ft_strlcpy(b2, b1, 41 - i);
		strlcpy(b1, b2, 41 - i);
		if (strcmp(b1, b2) != 0)
		{
			printf("\t-Nope\n");	
			exit(6);		
		}
		i--;
	}
	ft_strlcpy(b2, b1, 0);
	strlcpy(b2, b1, 0);
	if (*b1 != *b2)
	{
		printf("\t-Nope\n");	
		exit(6);		
	}
	printf("\t+Aproved!\n");

	printf("Cheking ft_strlcat\n");

	char b3[42];
	ft_memset(b3, '?', 41);
	b3[41] = '\0';
	
	ft_bzero(b1, 41);
	ft_bzero(b2, 41);
	i = 0;
	while (i != 43)
	{
		printf("%d | %zu - %s\n", i, ft_strlcat(b2, b3, i), b2);
		i++;
	}

	printf("\t+Aproved!\n");
	
	return (0);
}
