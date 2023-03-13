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

size_t	ft_strlen(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int c);

#endif
