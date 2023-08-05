/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthiruma <pthiruma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 08:37:45 by pthiruma          #+#    #+#             */
/*   Updated: 2023/07/26 11:28:59 by pthiruma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

// memory allocation, random number generation, sorting - malloc, free, rand, atoi
# include <stdlib.h>
//  input and output operations -  printf, scanf, fopen, fclose
# include <stdio.h>
//  system calls and constants for POSIX operating systems - write, read, close
# include <unistd.h>
// variable argument lists in functions - printf and scanf
# include <stdarg.h>
// standard types and macros -  size_t, NULL
# include <stddef.h>
//  file control options for handling file descriptors - open, close, read, write
# include <fcntl.h>

//libft
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int x);
int		ft_isascii(int i);
int		ft_isprint(int i);
int		ft_toupper(int c);
int		ft_tolower(int c);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

long	ft_atoi(const char *nptr);
char	*ft_itoa(int n);
void	ft_bzero(void *s, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//printf
int		ft_printf(const char *s, ...);
void	ft_putdec(int i, int *len);
void	ft_putlong(long ld, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putchar(char c, int *len);
void	ft_putdec_u(unsigned int i, int *len);
void	ft_putlong_u(unsigned long lu, int *len);
void	ft_hex(unsigned int i, int *len, char y);
void	ft_ptr(unsigned long i, int *len);

#endif