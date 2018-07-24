#include <stdio.h>
void swap (int *ptr1, int *ptr2){
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

void arrange(int *ptr, int size){
    for(int *iter=ptr;iter<ptr+size;iter++)
        if(*iter%2==0)
            for(int *temp=iter+1;temp<ptr+size;temp++){
                if(*temp%2!=0)
                swap(temp,iter);
            }
}

display (int *ptr, int n){
    for (int *temp = ptr; temp < ptr + n; temp++)
    printf ("%d ", *temp);
}
int main ()
{
  int a[5] = { 1, 2, 5, 4, 3 };
  display (a, 5);
  arrange(a, 5);
  display (a, 5);
  return 0;
}
