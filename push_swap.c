#include "push_swap.h"
int checker(char *str)
{
    int i;
    int flag;

    flag = 0;
    i = 0;
    while (str[i] != '\0')
    {   
        if(str[0] == '-')
            i++;
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            flag = 1;
            break;
        }
        i++;
    }
    return(flag);
}
t_list * split(char *argc)
{
    char **str;
    int i;
    t_list *first = NULL;

    i = 0;
    str =ft_split(argc,' ');
    
    while (str[i] != (void *)0)
    {
        if(checker(str[i])==1)
            return NULL;
       ft_lstadd_back(&first,ft_lstnew(ft_atoi(str[i])));
        i++;
    }
    //    printf("%d ",first->content);
    freed(str);
    // printf("\n");
    return first;
}
void algorithm(t_list *a, t_list *b)
{
    int i;
    t_list *tmpa;
    t_list *tmpb;

    // tmpa = *a;
    // tmpb = *b;
    i = ft_lstsize(a);
    while(i>0){
    if (a->content > a->next->content)
        pab(&a,&b);

    printf("%d\n",a->content);
    // printf("%d\n",b->content);
    i--;
    }
}
int main( int argv, char *argc[])
{
    if (argv > 2)
    {
        t_list * a = NULL;
        t_list * b = NULL;
        t_list * tmp;
        // first = tmp;
        int i = 1;
        while( i < argv)
        {
            if(ft_strchr(argc[i],' '))
            {
                tmp =split(argc[i]);
                if(tmp == NULL)
                {
                    ft_lstclear(&a, free);
                    return 0;
                }
                ft_lstadd_back(&a,tmp);
            }
            else
            {
                tmp = ft_lstnew(ft_atoi(argc[i]));
                ft_lstadd_back(&a,tmp);
            }
            i++;
        }
        algorithm(a,b);
// t_list *t = ft_lstlast(first);
//  while(first != NULL)
// {
//     printf("%d\n",first->content);

//     first= first->next;
// }

    }
}
