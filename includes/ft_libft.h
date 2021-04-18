/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:31:56 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/18 02:34:01 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
/* ************************************************************************** */
/*                              TYPEDEF & DEFINE                              */
/* ************************************************************************** */
typedef unsigned long int	size_t;
# define 					MIN(x, y) ((x <= y) ? x : y)
# define 					MAX(x, y) ((x >= y) ? x : y)
/* ************************************************************************** */
/*                                 FIRST PART                                 */
/* ************************************************************************** */
void						*ft_memset(void *b, int c, size_t len);
void						ft_bzero(void *b, size_t n);
void						*ft_memcpy(void *dst, const void *src, size_t n);
void						*ft_memccpy(void *dst, const void *src, int c,
								size_t n);
void						*ft_memmove(void *dst, const void *src, size_t len);
void						*ft_memchr(const void *s, int c, size_t n);
int							ft_memcmp(const void *s1, const void *s2, size_t n);
size_t						ft_strlen(const char *s);
int							ft_isalpha(int c);
int 						ft_isdigit(int c);
int							ft_isalnum(int c);
int							ft_isascii(int c);
int							ft_isprint(int c);
int							ft_toupper(int c);
int							ft_tolower(int c);
char						*ft_strchr(const char *s, int c);
char						*ft_strrchr(const char *s, int c);
int							ft_strncmp(const char *s1, const char *s2,
								size_t n);
size_t						ft_strlcpy(char *dst, const char *src,
								size_t dstsize);
size_t						ft_strlcat(char *dst, const char *src,
								size_t dstsize);
char						*ft_strnstr(const char *haystack,
								const char *needle, size_t len);
int							ft_atoi(const char *str);
void						*ft_calloc(size_t count, size_t size);
char						*ft_strdup(const char *s1);
/* ************************************************************************** */
/*                                 SECOND PART                                */
/* ************************************************************************** */
/* ************************************************************************** */
/*                                   BONUS                                    */
/* ************************************************************************** */
/* ************************************************************************** */
/*                                 PERSONNAL                                  */
/* ************************************************************************** */
void						ft_swap(void *a, void *b);
int							ft_isupper(int c);
int							ft_islower(int c);
int							ft_isblank(int c);
int							ft_isspace(int c);
void						*ft_memrchr(const void *s, int c, size_t n);
int							ft_strcmp(const char *s1, const char *s2);
char						*ft_strncpy(char * dst, const char * src,
								size_t len);
char						*ft_strcpy(char * dst, const char * src);
char						*ft_strncat(char *s1, const char *s2, size_t n);
char						*ft_strcat(char *s1, const char *s2);
char						*ft_strstr(const char *haystack, 
								const char *needle);
char						*ft_strndup(const char *s1, size_t n);

#endif
