#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list*)malloc(sizeof(t_list));
	ptr->content = content;
	ptr->next = 0;
	return (ptr);
}