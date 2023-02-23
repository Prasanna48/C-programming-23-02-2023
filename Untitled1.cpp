#include<stdio.h>
int main()
{
	int i,n,s=0,t;
	printf("\n enter a number");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		i=n%10;
		s=(s*10)+i;
		n=n/10;
	}
	if(s==t)
	printf("\n given number is palindrome");
	else
	printf("\n given number is not a palindrome");
}
