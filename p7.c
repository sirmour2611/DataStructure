#include <stdio.h>


int NonZero(int *ptr,int n)
{   int count=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        if((*ptr++)!=0)
         count++;
    return count;    
    }
int SumAbove(int *ptr,int n)
{   int sum=0;
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
        sum+=*(ptr+((n*i)+j));
    return sum;
}

void BelowMinor(int *ptr,int n)
{   for(int i=1;i<n;i++)
    for(int j=n-i;j<n;j++)
      printf("%d ",*(ptr+(i*n+j)));  
    
}
int DigonalProduct(int *ptr,int n)
{   int product=1;
    for(int i=0;i<n;i++)
      if(i==(n/2))
      product*=*(ptr+n*i+i);
      else  product*=(*(ptr+n*i+i))*(*(ptr+(n*i)+n-i-1));
             return product;
    
}
int main ()
{
int a[3][3]={1,2,3,4,5,6,7,8,9};
printf("\nNon Zero : %d",NonZero(a,3));
printf("\nSum above  : %d",SumAbove(a,3));
printf("\nElement Below Minor Are :\n ");
BelowMinor(a,3);
printf("\nDIgonal Element Product : %d",DigonalProduct(a,3));
  return 0;
}
