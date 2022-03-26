#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*add;
	t_list	*temp;

	add = *lst;
	temp = add;
	while (temp != 0)
	{
		add = add->next;
		del(temp->content);
		free(temp);
		temp = add;
	}
	*lst = 0;
}