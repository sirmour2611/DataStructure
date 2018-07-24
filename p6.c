#include <stdio.h>

void NextGreaterInt(int *ptr, int size){
    int flag;
    for(int *iter=ptr;iter<ptr+size;iter++)
    {    flag=0;
        for(int *temp=iter;temp<ptr+size;temp++)
     
          if (*temp > *iter)
            {   flag=1;
                printf("%d  Next Greater Int is %d\n",*iter,*temp);
                break;
            }
 
     if(!flag)
         printf("%d next Next Greater Int is %d\n",*iter,-1);
     }
}

int main ()
{
int a[6]={1,2,3,1,7,6};
NextGreaterInt(a,6);
return 0;
}