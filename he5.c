#include<stdio.h>
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

void display (int *ptr, int n){
     for (int *temp = ptr; temp < ptr + n; temp++)
    printf ("%d ", *temp);
}

void arrange(int **ptr, int row,int col){
    for(int **temp=ptr;temp<ptr+row;ptr++);
}

int main (){
int a[3][3]={3,2,1,6,5,4,7,8,9};
     


}