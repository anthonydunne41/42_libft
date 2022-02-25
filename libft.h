#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <strings.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str);
int ft_isalnum(int c);
int isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void	*ft_memset(void *str, int c, size_t n);
char *strchr(const char *s, int c);
size_t ft_strlen(const char *c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *strchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);



#endif