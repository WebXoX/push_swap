
#include "push_swap.h"
int checker(char *str)
{
    int i;
    int flag;

    flag = 1;
    i = 0;
    while (str[i] != '\0')
    {   
        if(str[0] == '-')
            i++;
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            flag = 0;
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
    t_list *first;

    i = 0;
    str =ft_split(argc,' ');
    
    while (str[i] != (void *)0)
    {
        if(checker(str[i])==0)
            return NULL;
       ft_lstadd_front(&first,ft_lstnew(ft_atoi(str[i])));
        i++;
    }
    freed(str);
    return first;
}

int main( int argv, char *argc[])
{
    if (argv > 2)
    {
        t_list * first;
        t_list * tmp;
        first = tmp;
        int i = 1;
        // while( i < argv)
        // {
            if(ft_strchr(argc[i],' '))
            {
                ft_lstadd_front(&first,split(argc[i]));
            }
            i++;
        // }

 while(tmp != NULL)
{
    printf("%d\n",first->content);

    first= first->next;
}

    }
}
