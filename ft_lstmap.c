#include "libft.h"
//각 원소의 content에 함수 'f'를 적용하고 함수 'f'의 연속적인 적용에서 나오는
//결과물을 가지고 새로운 리스트를 만들라.
//'del'함수는 필요시 content를 삭제할때 쓰인다.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;
	t_list	*res;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (new_list == 0)
		return (0);
	res = new_list;
	while (lst->next != 0)
	{
		new_list->content = f(lst->content);
		new_list->next = (t_list *)malloc(sizeof(t_list));
		if (new_list == 0)
			return (0);
		new_list = new_list->next;
		temp = lst;
		lst = lst->next;
		del(temp->content);
		free(temp);
	}
	return (res);
}