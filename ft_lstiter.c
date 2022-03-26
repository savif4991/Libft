#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*add;

	add = lst;
	while (1)
	{
		f(add->content);
		if (add->next != 0)
			add = add->next;
		else
			break ;
	}
}