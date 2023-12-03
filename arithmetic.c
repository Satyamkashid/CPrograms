#include<stdio.h>
const MAX=3;
int main()
{
	int var[]={20,200,400};
	int i,*ptr;
	ptr=&var[MAX+1];
	for(i=0;i<MAX;i++)
	{
		printf("\naddress of var[] is %x\n",i,ptr);
		printf("value of var[]is %d\n",i,*ptr);
		ptr++;
	}
	return 0;

}
