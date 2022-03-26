#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list new)
{
	t_list	*add;

	add = *lst;
	while (1)
	{
		if (add->next != 0)
			add = add->next;
		else
			add->next = &new;
	}
}