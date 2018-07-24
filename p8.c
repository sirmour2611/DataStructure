#include <stdio.h>
#include<limits.h>
int MinDiatance(int *ptr, int size,int a,int b){
    int MinDist=INT_MAX;
    for(int *iter=ptr;iter<ptr+size;iter++)
    if(*iter==a)
        for(int *temp=ptr;temp<ptr+size;temp++)
            if (*temp==b )
               if(temp>iter)
                if(MinDist>((temp-iter)-1))
                MinDist=temp-iter-1;
               else
                 if(MinDist<((temp-iter)-1))
                 MinDist=iter-temp-1;
    
        if(MinDist==INT_MAX)
            MinDist=-1;
        return MinDist;    
  }
     


int main ()
{
int a[6]={1,2,3,7,5,7};
printf(" destance between them is %d",MinDiatance(a,6,1,7));
  return 0;
}
