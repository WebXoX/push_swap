#include "push_swap.h"
# include <stdio.h>

int sab(t_list *ab)
{
    t_list *index2;
    int temp;
    if(ab == NULL)
        return (1);
    index2 =  (ab->next);
    if(index2 != NULL)
    {
        temp = ab->content;
        ab->content = index2->content;
        index2->content = temp;
        return (0);
    }
    return (1);
}

void ss(t_list *a, t_list *b)
{
    if(sab(a)== 1)
        write(1,"failed",6);
    if(sab(b) == 1)
        write(1,"failed",6);
}

t_list * pab(t_list *source, t_list *distance)
{
    t_list * tmp;
    t_list * tmp1;

    tmp = source;
    tmp1= source->next;
    tmp->next = distance;
    return (tmp);
}


int main ()
{
    t_list a;
    a.content =1;
    a.next = NULL;

    t_list b;
    b.content= 2;

    b.next = NULL;

    t_list *af;
    t_list *as;

    af = &a;
    as = &b;
as = pab(af,as);
printf("%d",as->content);
}




// int main ()
// {
//     // t_list **a;
//     t_list  b;
//     t_list  c;

//     c.index=0;
//     c.content =1;
//     c.next = &b;
// b.index=1;
// b.next = 0;
//     b.content =2;

//     // **a = *c;
//     printf("%d: %d \n",c.index,c.content);
//     printf("%d: %d \n",b.index,b.content);
//     sa(&c);
//     printf("%d: %d \n",c.index,c.content);
//     printf("%d: %d \n",b.index,b.content);
// }

// t_list push_stack(int index, int content )
// {
//     t_list new;
//     // t_list *newp = NULL;


//     new.index = index;
//     new.content = content;
//     new.next= NULL;
//     return (new);
// }

// void prit( t_list *m)
// {
//     int j=0;
//     while (j <5)
//         {
//             printf("%d: %d \n",m->index,m->content);
//             m =  m->next;
//             j++;
//         }
// }
// int main ()
// {
//      t_list a ;
//      t_list TMP;
//      t_list *m ;
//      t_list *n;

//      int j = 0;
//      a = (push_stack(j,j));
//      a.next = &a;
//      m = &a;
//      n = m;
//      j = 1;
//     //  TMP =push_stack(1,1);
//     //  m->next = &TMP;

//         while (j <5)
//         {
//             TMP =push_stack(j,j);
//             m->next = &TMP;
//             // printf("%d: %d \n",m->index,m->content);
//             m =  m->next;
//             j++;
//         }
//          while (j <5)
//         {
//             printf("%d: %d \n",n->index,n->content);
//             n =  n->next;
//             j++;
//         }
//         prit(n);
//         // printf("%d: %d \n",m->next->index,m->content);


// }
