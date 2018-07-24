#include <stdio.h>
void display (int *ptr, int n){
  for (int *temp = ptr; temp < ptr + n; temp++)
    printf ("%d ", *temp);
}

void NextGreaterInt(int *ptr, int size){
    int flag;
    for(int *iter=ptr;iter<ptr+size;iter++)
    {    flag=0;
        for(int *temp=iter;temp<ptr+size;temp++)
     
          if (*temp > *iter)
            {   flag=1;
                *iter=*temp;
                break;
            }
 
     if(!flag)
         *iter=-1;
     }
}
int main (){
int a[6]={1,2,3,1,7,6};
display(a,6);
NextGreaterInt(a,6);
display(a,6);
return 0;
}