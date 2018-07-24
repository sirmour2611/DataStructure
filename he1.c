#include <stdio.h>
void DisplaySecond(int *ptr, int n)
{
    int  SmallFirst, SmallSecond,LargeFirst,LargeSecond;
    SmallFirst=SmallSecond=LargeFirst=LargeSecond=*ptr;
    for(int *temp=ptr;temp<ptr+n;temp++){  
        if(SmallFirst>*temp){
            SmallSecond=SmallFirst;
            SmallFirst=*temp;
        }
         else if(SmallSecond>*temp)
            SmallSecond=*temp;
        if(LargeFirst<*temp){
            LargeSecond=LargeFirst;
            LargeFirst=*temp;
         }
           else if(LargeSecond<*temp)
             LargeSecond=*temp;
      }
      printf("SECOND LARGEST : %d SECOND SMALLEST: %d",LargeSecond,SmallSecond);
}
int main()
{
    int arr[] = {12, 13, 1, 10, 34, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    DisplaySecond(arr, n);
    return 0;
}
