#include<stdio.h>

void display (int *ptr, int n){
     for (int *temp = ptr; temp < ptr + n; temp++)
    printf ("%d ", *temp);
}
void PreNextMulti(int *ptr, int size){
    int flag=*ptr;
    for(int *iter=ptr+1;iter<ptr+size-1;iter++)
    {
    int pre=*iter;
    *iter=flag*(*(iter+1));  
     flag=pre;
    } 
}
int main (){
int a[6]={1,2,3,1,7,6};
display(a,6);
PreNextMulti(a,6);
display(a,6);
return 0;
}