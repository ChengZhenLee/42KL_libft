#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
} t_list;

void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

#endif
