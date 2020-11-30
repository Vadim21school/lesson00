/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:11:53 by agina             #+#    #+#             */
/*   Updated: 2020/11/30 17:32:27 by agina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void		*ft_memset(void *dest, int c, size_t len);
void		ft_bzero(void *b, size_t len);
void		*ft_memcpy(void *destination, const void *source, size_t n);
void		*ft_memccpy(void *destination, const void *source, int ch, size_t count);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *arr, int c, size_t n);
int			ft_memcmp(const void *arr1, const void *arr2, size_t n);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t n);
char		*ft_strchr(const char *str, int ch);
char		*ft_strrchr(const char *str, int ch);
char		*ft_strnstr(const char *str1, const char *str2, size_t len);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int num);
int			ft_isalnum(int per);
int			ft_isascii(int per);
int			ft_isprint(int per);
int			ft_toupper(int character);
int			ft_tolower(int character);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		**ft_split(char const *s, char c);

#endif
