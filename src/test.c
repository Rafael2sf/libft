/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:33:19 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/19 13:29:53 by rafernan         ###   ########.fr       */
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

	i = -275;
	printf("Cheking ft_is...\t");
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

	printf("Cheking ft_strlen\t");
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
	ft_memset(b1, '\0', 42);
	memset(b2, '\0', 42);
	printf("Cheking ft_memset\t");
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

	printf("Cheking ft_bzero\t");
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

	printf("Cheking ft_memset\t");
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

	printf("Cheking ft_memmove\t");

	i = 0;
	ft_bzero(b1, 41);
	ft_bzero(b2, 41);
	strlcpy(b1, "abcdef9876543210\0", 17);
	ft_strlcpy(b2, "abcdef9876543210\0", 17);
	while (i != 17)
	{
		memcpy(b1 + i, b1 + i / 2, i + 1);
		ft_memmove(b2 + i, b2 + i / 2, i + 1);
		if (strcmp(b1, b2) != 0)
		{
			printf("\t-Nope\n");
			exit(7);
		}
		i++;
	}

	printf("\t+Aproved!\n");

	printf("Cheking ft_strlcpy\t");
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

	printf("Cheking ft_strlcat\t");

	char b3[42];
	ft_memcpy(b3, "0123456789abcdef", 17);
	b3[17] = '\0';
	
	ft_bzero(b1, 41);
	ft_bzero(b2, 41);
	i = 17;
	while (i >= 0)
	{
		if (strlcat(b1, b3 + i, 17 - i) != ft_strlcat(b2, b3 + i, 17 - i)
			|| strcmp(b1, b2) != 0)
		{
			printf("\tNope\n");
			exit(8);
		}
		i--;
	}

	printf("\t+Aproved!\n");

	printf("Cheking ft_toupper/lower");
	i = 0;
	ft_bzero(b1, 41);
	ft_memcpy(b1, "AaB0~1@&^09,pw1AzDe\0", 21);
	while (i != 21)
	{
		if (tolower(b1[i]) != ft_tolower(b1[i]))
		{
			printf("\tNope\n");
			exit(9);	
		}
		if (toupper(b1[i]) != ft_toupper(b1[i]))
		{
			printf("\tNope\n");
			exit(9);	
		}
		i++;
	}

	printf("\t+Aproved!\n");

	printf("Cheking strchar/strrchar");
	ft_bzero(b1, 42);
	ft_strlcpy(b1, "abcd-dcba", 10);
	if (ft_strchr(b1, 'a') != strchr(b1, 'a')
		|| ft_strrchr(b1, 'b') != strrchr(b1, 'b'))
	{
		printf("\tNope\n");
		exit(10);
	}

	printf("\t+Aproved!\n");

	printf("Cheking strncmp\t\t");
	bzero(b1, 42);	
	bzero(b2, 42);	
	strlcpy(b1, "0123456789abcdef", 17);
	strlcpy(b2, "0123456789abcdef", 17);
	if (ft_strncmp(b1, b2, 16) != ft_strncmp(b1, b2, 16))
	{
		printf("\tNope\n");
		exit(11);	
	}
	b1[5] += 5;
	if (ft_strncmp(b1, b2, 16) != ft_strncmp(b1, b2, 16))
	{
		printf("\tNope\n");
		exit(11);	
	}
	b1[5] -= 5;
	b2[5] += 5;
	if (ft_strncmp(b1, b2, 16) != ft_strncmp(b1, b2, 16))
	{
		printf("\tNope\n");
		exit(11);	
	}
	
	printf("\t+Aproved!\n");

	printf("Checking functions with null input\n");

	ft_bzero(NULL, 42);
	ft_memset(NULL, 0, 42);
	ft_memcpy(NULL, NULL, 42);
	ft_memmove(NULL, NULL, 42);
	ft_strlen(NULL);
	ft_strlcpy(NULL, NULL, 42);
	ft_strlcat(NULL, NULL, 42);
	// Not applied on strncmp

	printf("GG!\n");
	return (0);
}
