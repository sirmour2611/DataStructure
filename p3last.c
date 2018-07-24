#include<stdio.h>

int LinearSearch(int *ptr,int size,int search)
{   
	if(*(ptr+size-1)==search)
		return size;
	return 	LinearSearch(ptr,--size,search);
}

int main()
{
	int a[5]={1,2,3,4,5};
	int search;
	scanf("%d",&search);
	LinearSearch(a,5,search)?printf("\npresent at %d posi",LinearSearch(a,5,search)):printf("\nnot present");
	scanf("%d ",&search);
	scanf("%d",&search);
	return 0;
}