 # include "libft.h"
 # include <stdio.h>
 int main()
 {
     t_list *lst;
     t_list *tmp;

     int    a = 5, b = 8, c = 1;
    
     lst = ft_lstnew(&a);
     ft_lstadd_back(&lst, ft_lstnew(&b));
     ft_lstadd_back(&lst, ft_lstnew(&c));
     tmp = lst;
     while (tmp)
     {
         printf("%d\n", *(int*)tmp->content);
         tmp = tmp->next;
     }
 }
 void mz(void* d)
 {
      *(int*)d += 20;
 }

 int main()
 {
     t_list *lst;
     t_list *tmp;


     lst = NULL;
     int *a=malloc(4);
     a[0]=5;
     int b = 1, c = 2,d = 3;
     lst = ft_lstnew(a);
     tmp = lst;
     ft_lstadd_back(&lst,ft_lstnew(&b));
     ft_lstadd_back(&lst,ft_lstnew(&c));
     ft_lstadd_back(&lst,ft_lstnew(&d));
     while (tmp)
     {
         printf(" %d-->", *((int *)tmp->content));
         tmp = tmp->next;
     }
     printf("\n");
     ft_lstiter(lst, mz);
     while (lst)
     {
         printf(" %d-->", *((int *)lst->content));
         lst = lst->next;
     }
 }

 int main()
 {
     t_list    *lst;
     t_list    *tmp;

     int a = 6, b = 9;
     lst = ft_lstnew(&a);
     ft_lstadd_front(&lst, ft_lstnew(&b));
     tmp = lst;
     while (tmp)
     {
         printf("%d", *(int*)tmp->content);
         tmp = tmp->next;
     }
     printf("\n size = %d", ft_lstsize(lst));
     return (0);
 }
