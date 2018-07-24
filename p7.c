#include <stdio.h>
int NonZero(int *ptr,int n)
{   int count=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        if((*ptr++)!=0)
         count++;
return count;    
    
}

int main ()
{
int a[3][3]={1,2,3,4,5,6,7,8,9};
printf("\nNon Zero : %d",NonZero(a,3));
  return 0;
}
