#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*add;

	count = 1;
	add = lst->next;
	while (1)
	{
		if (add != 0)
		{
			count++;
			add = add->next;
		}
		else
			return (count);
	}
}