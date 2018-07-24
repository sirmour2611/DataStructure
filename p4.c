#include <stdio.h>
 
 void swap(int *ptr1,int *ptr2){
     int temp= *ptr1;
     *ptr1=*ptr2;
     *ptr2=temp;
 }

void sort(int *ptr,int size)
{   
    for(int i=0;i<size-1;i++)
    for(int j=0;j<size-i-1;j++)
        if(*(ptr+j) > *(ptr+j+1))
        swap(ptr+j,ptr+j+1);
}

display(int *ptr,int n){
    int *temp=ptr;
    for(;temp<ptr+n;temp++)
    printf("%d ",*temp);
}

int main (){
  int a[5]={1,2,5,4,3};
  display(a,5);
  sort(a,5);
  display(a,5);
  return 0;
}
