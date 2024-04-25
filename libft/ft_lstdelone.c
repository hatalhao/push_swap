#include "libft.h"

void ft_lstdelone(t_list **lst)
{
	if (!lst || !*lst)
		return ;
	free ((*lst)->content);
	free (*lst);
}
