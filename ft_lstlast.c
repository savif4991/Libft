#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*add;

	add = lst->next;
	while (1)
	{
		if (add->next != 0)
			add = add->next;
		else
			return (add);
	}
}