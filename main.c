/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:50:48 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/16 04:55:53 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "includes/ft_libft.h"

int	test_memset()
{
	int		**arrayref;
	int		**arrayres;
	char	**charref;
	char	**charres;
	const size_t sizearray[] = {0, sizeof(int) * 3, sizeof(int) * 3,
								sizeof(int) * 5, sizeof(int) * 5};
	const size_t sizechar[] = {0, sizeof(char) * 7, sizeof(char) * 7,
							sizeof(char) * 17, sizeof(char) * 17};
	int		rep[] = {0, 0, 7, 0, 48};
	int		length;
	int		correct;
	int		error;
	int		i;

	if (!(arrayref = malloc(sizeof(int *) * 5)))
		return (-1);
	if (!(arrayres = malloc(sizeof(int *) * 5)))
		return (-1);
	i = -1;
	while (++i < 5)
	{
		if (!(arrayref[i] = malloc(sizeof(int) * 5)))
			return (-1);
		arrayref[i][0] = 54;
		arrayref[i][1] = 85;
		arrayref[i][2] = 20;
		arrayref[i][3] = 63;
		arrayref[i][4] = 21;
		if (!(arrayres[i] = malloc(sizeof(int) * 5)))
			return (-1);
		arrayres[i][0] = 54;
		arrayres[i][1] = 85;
		arrayres[i][2] = 20;
		arrayres[i][3] = 63;
		arrayres[i][4] = 21;
	}
	i = -1;
	error = 0;
	while (++i < 5)
	{
		memset(arrayref[i], rep[i], sizearray[i]);
		ft_memset(arrayres[i], rep[i], sizearray[i]);
		length = -1;
		correct = 0;
		while (++length < 5)
			if (arrayres[i][length] != arrayref[i][length])
				correct = 1;
		if (correct != 0)
		{
			printf("test %i KO : result by ft_memset = ", i);
			while (++length < 10)
				printf("%d ", arrayres[i][length - 5]);
			printf(" | expected ");
			while (++length < 15)
				printf("%d ", arrayref[i][length - 10]);
			printf("\n");
			error++;
		}
		else
			printf("test %i OK\n", i);
	}
	if (!(charref = malloc(sizeof(char *) * 5)))
		return (-1);
	if (!(charres = malloc(sizeof(char *) * 5)))
		return (-1);
	i = -1;
	while (++i < 5)
	{
		charref[i] = strdup("Ceci est un Test");
		charres[i] = strdup("Ceci est un Test");
	}
	i = -1;
	error = 0;
	while (++i < 5)
	{
		memset(charref[i], rep[i], sizechar[i]);
		ft_memset(charres[i], rep[i], sizechar[i]);
		if (strcmp(charres[i], charref[i]) != 0)
		{
			printf("test %i KO : result by ft_memset = %s | expected %s\n",
				i + 5, charres[i], charref[i]);
			error++;
		}
		else
			printf("test %i OK\n", i + 5);
	}
	return (error);
}

int	test_bzero()
{
	int		**arrayref;
	int		**arrayres;
	char	**charref;
	char	**charres;
	const size_t sizearray[] = {0, sizeof(int) * 3, sizeof(int) * 3,
								sizeof(int) * 5, sizeof(int) * 5};
	const size_t sizechar[] = {0, sizeof(char), sizeof(char) * 7,
							sizeof(char) * 17, sizeof(char) * 17};
	int		length;
	int		correct;
	int		error;
	int		i;

	if (!(arrayref = malloc(sizeof(int *) * 5)))
		return (-1);
	if (!(arrayres = malloc(sizeof(int *) * 5)))
		return (-1);
	i = -1;
	while (++i < 5)
	{
		if (!(arrayref[i] = malloc(sizeof(int) * 5)))
			return (-1);
		arrayref[i][0] = 54;
		arrayref[i][1] = 85;
		arrayref[i][2] = 20;
		arrayref[i][3] = 63;
		arrayref[i][4] = 21;
		if (!(arrayres[i] = malloc(sizeof(int) * 5)))
			return (-1);
		arrayres[i][0] = 54;
		arrayres[i][1] = 85;
		arrayres[i][2] = 20;
		arrayres[i][3] = 63;
		arrayres[i][4] = 21;
	}
	i = -1;
	error = 0;
	while (++i < 5)
	{
		bzero(arrayref[i], sizearray[i]);
		ft_bzero(arrayres[i], sizearray[i]);
		length = -1;
		correct = 0;
		while (++length < 5)
			if (arrayres[i][length] != arrayref[i][length])
				correct = 1;
		if (correct != 0)
		{
			printf("test %i KO : result by ft_bzero = ", i);
			while (++length < 10)
				printf("%d ", arrayres[i][length - 5]);
			printf(" | expected ");
			while (++length < 15)
				printf("%d ", arrayref[i][length - 10]);
			printf("\n");
			error++;
		}
		else
			printf("test %i OK\n", i);
	}
	if (!(charref = malloc(sizeof(char *) * 5)))
		return (-1);
	if (!(charres = malloc(sizeof(char *) * 5)))
		return (-1);
	i = -1;
	while (++i < 5)
	{
		charref[i] = strdup("Ceci est un Test");
		charres[i] = strdup("Ceci est un Test");
	}
	i = -1;
	error = 0;
	while (++i < 5)
	{
		bzero(charref[i], sizechar[i]);
		ft_bzero(charres[i], sizechar[i]);
		if (strcmp(charres[i], charref[i]) != 0)
		{
			printf("test %i KO : result by ft_bzero = %s | expected %s\n",
				i + 5, charres[i], charref[i]);
			error++;
		}
		else
			printf("test %i OK\n", i + 5);
	}
	return (error);
}

int	test_atoi()
{
	int			error;
	int			i;
	int			n;
	int			nref;
	char		*str[15] = {"42", " 	 	42", "-42", "	 		 -42",
							"+42", "42test", "test42test", "+-42", "	+-42",
							"--42", "4232578825", "-2147483648", "",
							"		-2147483648", "		-15test42"};

	error = 0;
	i = -1;
	while (++i < 15)
	{
		n = ft_atoi(str[i]);
		nref = atoi(str[i]);
		if (n != nref)
		{
			printf("test %i KO : result by ft_atoi = %i | expected %i\n", i + 1,
				n, nref);
			error++;
		}
		else
			printf("test %i OK\n", i);
	}
	return (error);
}

int	main()
{
	int res;
	int score;

	score = 0;
	printf("-------------------------- TEST ft_memset.c -------------------\n");
	res = test_memset();
	if (res == 0) 
		printf("ft_memset.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_memset.c KO : %i error\nscore = %i \\ 35\n", res, score);
	printf("-------------------------- TEST ft_bzero.c --------------------\n");
	res = test_bzero();
	if (res == 0)
		printf("ft_bzero.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_bzero.c KO : %i error\nscore = %i \\ 35\n", res, score);
	printf("-------------------------- TEST ft_memcpy.c -------------------\n");
	/*res = test_memcpy();
	if (res == 0)
		printf("ft_memcpy.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_memcpy.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_memccpy.c ------------------\n");
	/*res = test_memccpy();
	if (res == 0)
		printf("ft_memccpy.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_memccpy.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_memmove.c ------------------\n");
	/*res = test_memmove();
	if (res == 0)
		printf("ft_memmove.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_memmove.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_memchr.c -------------------\n");
	/*res = test_memchr();
	if (res == 0)
		printf("ft_memchr.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_memchr.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_memcmp.c -------------------\n");
	/*res = test_memcmp();
	if (res == 0)
		printf("ft_memcmp.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_memcmp.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_strlen.c -------------------\n");
	/*res = test_strlen();
	if (res == 0)
		printf("ft_strlen.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_strlen.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_isalpha.c ------------------\n");
	/*res = test_isalpha();
	if (res == 0)
		printf("ft_isalpha.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_isalpha.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_isdigit.c ------------------\n");
	/*res = test_isdigit();
	if (res == 0)
		printf("ft_isdigit.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_isdigit.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_isalnum.c ------------------\n");
	/*res = test_isalnum();
	if (res == 0)
		printf("ft_isalnum.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_isalnum.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_isascii.c ------------------\n");
	/*res = test_isascii();
	if (res == 0)
		printf("ft_isascii.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_isascii.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_isprint.c ------------------\n");
	/*res = test_isprint();
	if (res == 0)
		printf("ft_isprint.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_isprint.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_toupper.c ------------------\n");
	/*res = test_toupper();
	if (res == 0)
		printf("ft_toupper.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_toupper.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_tolower.c ------------------\n");
	/*res = test_tolower();
	if (res == 0)
		printf("ft_tolower.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_tolower.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_strchr.c -------------------\n");
	/*res = test_strchr();
	if (res == 0)
		printf("ft_strchr.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_strchr.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_strncmp.c ------------------\n");
	/*res = test_strncmp();
	if (res == 0)
		printf("ft_strncmp.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_strncmp.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_strlcpy.c ------------------\n");
	/*res = test_strlcpy();
	if (res == 0)
		printf("ft_strlcpy.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_strlcpy.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_strlcat.c ------------------\n");
	/*res = test_strlcat();
	if (res == 0)
		printf("ft_strlcat.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_strlcat.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_strnstr.c ------------------\n");
	/*res = test_strnstr();
	if (res == 0)
		printf("ft_strnstr.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_strnstr.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_atoi.c ---------------------\n");
	res = test_atoi();
	if (res == 0)
		printf("ft_atoi.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_atoi.c KO : %i error\nscore = %i \\ 35\n", res, score);
	printf("-------------------------- TEST ft_calloc.c -------------------\n");
	/*res = test_calloc();
	if (res == 0)
		printf("ft_calloc.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_calloc.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_strdup.c -------------------\n");
	/*res = test_strdup();
	if (res == 0)
		printf("ft_strdup.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_strdup.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_substr.c -------------------\n");
	/*res = test_substr();
	if (res == 0)
		printf("ft_substr.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_substr.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_strjoin.c ------------------\n");
	/*res = test_strjoin();
	if (res == 0)
		printf("ft_strjoin.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_strjoin.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_strtrim.c ------------------\n");
	/*res = test_strtrim();
	if (res == 0)
		printf("ft_strtrim.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_strtrim.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_split.c --------------------\n");
	/*res = test_split();
	if (res == 0)
		printf("ft_split.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_split.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_itoa.c ---------------------\n");
	/*res = test_itoa();
	if (res == 0)
		printf("ft_itoa.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_itoa.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_strmapi.c ------------------\n");
	/*res = test_strmapi();
	if (res == 0)
		printf("ft_strmapi.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_strmapi.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_putchar_fd.c ---------------\n");
	/*res = test_putchar_fd();
	if (res == 0)
		printf("ft_putchar_fd.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_putchar_fd.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_putstr_fd.c ----------------\n");
	/*res = test_putstr_fd();
	if (res == 0)
		printf("ft_putstr_fd.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_putstr_fd.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_putendl_fd.c ---------------\n");
	/*res = test_putendl_fd();
	if (res == 0)
		printf("ft_putendl_fd.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_putendl_fd.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- TEST ft_putnbr_fd.c ----------------\n");
	/*res = test_putnbr_fd();
	if (res == 0)
		printf("ft_putnbr_fd.c OK\nscore = %i \\ 35\n", ++score);
	else
		printf("ft_putnbr_fd.c KO : %i error\nscore = %i \\ 35\n", res, score);*/
	printf("-------------------------- MAIN TEST OVER ---------------------\n");
	return (0);
}
