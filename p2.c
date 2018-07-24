#include<stdio.h>

void Display(int *ptr ,int size)
{
int *temp=ptr;
	for(;temp<ptr+size;temp++)
	 printf("%d  ",*temp);
}

void ReverseArray(int *ptr,int size)
{	
	int t;
	int *temp=ptr+size-1;
	for(;ptr<temp;temp--,ptr++)
	{  
			t=*ptr;
	 		*ptr=*temp;
	 		*temp=t;
	 }
}

int main()
{
int a[5]={1,2,3,4,5};
Display(a,5);
ReverseArray(a,5);
Display(a,5);
return 0;
}