
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void			*ft_memset(void *b, int c, unsigned int len);
void			ft_bzero(void *s, size_t n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
size_t			ft_strlen(char *s);
unsigned int	strlcpy(char *dst, const char *src, unsigned int dstsize);
void			ft_putstr_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);

#endif
