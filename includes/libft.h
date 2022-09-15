/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:33:40 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/10 18:41:38 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);

int			ft_tolower(int c);
int			ft_toupper(int c);

int			ft_strlen(const char *str);
char		*ft_strchr(char const *s, int c);
char		*ft_strrchr(char const *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(char const *haystack, char const *needle, size_t len);
char		*ft_strtrim(char const *s);
char		*ft_strdup(const char *s1);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		**ft_split(char const *s, char c);

void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char const *s, int fd);

void		ft_bzero(void *s, size_t n);
int			ft_atoi(const char *str);
char		*ft_itoa(int n);


char		*ft_strjoin(char const *s1, char const *s2);
#endif