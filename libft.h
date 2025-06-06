/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htorun <htorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:40:58 by htorun            #+#    #+#             */
/*   Updated: 2025/06/04 02:16:00 by htorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>

int		ft_atoi(const char *nptr);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_isascii(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strchr(const char *s, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int  start, size_t   len);
char    *ft_strjoin(char const *s1, char const *s2);

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void    ft_bzero(void *s, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);

#endif
