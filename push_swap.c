
#include "push_swap.h"
int checker(char *str)
{
    int i;
    int flag;

    flag = 1;
    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9' ))
        {
            flag = 0;
            break;
        }
        i++;
    }
    return(flag)
}
int split(char *argc)
{
    char **str;
    int i;
    int answer;

    i = 0;
    str =ft_split(argc,' ');
    
    while (str[i] != (void *)0)
    {
        if(str[i])
        answer = ft_atoi(str[i]);
        i++;
    }    
}

int main( int argv, char *argc[])
{
    if (argv > 2)
    {
        t_list * first;
        int i = 1;
        while( i < argv)
        {
            if(ft_strchr(argc[i],' '))
            {
                split(argc[i]);

            }
            i++;
        }
    }
}
