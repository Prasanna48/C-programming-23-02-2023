#include<stdio.h>
int main()
{
	double number,s=0,i;
	printf("\n enter the number");
	scanf("%1f",&number);
	for(i=1;i<=number;i++)
	{
		s=s+(1/i);
		if (i==1)
		printf("\n 1+ ");
		else if (i==number)
		printf("(1/%1f)",i);
		else 
		printf("(1/%1f)+",i);
	}
	printf("\n the sum of the given series is %21f",s);
}
