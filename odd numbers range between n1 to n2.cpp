#include<stdio.h>
int main()
{
	int range=0,n1,n2,i,count=0,s=0;
	printf("enter two numbers:");
	scanf("%d %d",&n1,&n2);
	for (i=n1;i<=n2;i++)
	{
		if (i%2!=0)
		{
			count++;
			if(count!=3)
			printf("%d\t",i);
		}
	}
}
