#include<stdio.h>


void SmallAndLarge(int *ptr,int size)
{
	static int Small= *(ptr+size-1);
	static int Large=*(ptr+size-1);
	if(size==0)
	{
		printf("\n%d is smallest \n",Small );
		printf(" \n%d is largest \n",Large );
	}

if(Small>*(ptr+size-1))
	Small=*(ptr+size-1);

else if (Large<*(ptr+size-1))
	Large=*(ptr+size-1);

SmallAndLarge(ptr,size-1);

}


int main(){
 	int arr[5]={1,2,3,4,4};
 	SmallAndLarge(arr,5);



	return 0;
}
