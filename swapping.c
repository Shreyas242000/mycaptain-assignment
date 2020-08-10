#include<stdio.h>
 void main()
{
	int x,y;
	printf("enter two number\n");
	scanf("%d%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n no. after swapping is %d and %d\n",x,y);
	
}
