#include <stdio.h>

int RangePresent (int *ptr, int size,int a, int b){
    int count=0;
    for(int *temp=ptr;temp<ptr+size;temp++)
     if (*temp>=a && *temp<=b)
        count++;
    return count;
}

int main ()
{
int arr[6]={1,2,3,4,5,6};
int a=3,b=6;
printf("%d" ,RangePresent(arr,6,a,b));
return 0;
}
