#include<stdio.h>

main()
{
	int f=0,s=1,sum,n,i;
	
	printf("enter the value of n =");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\t",f);
		sum=f+s;
		f =s;
		s= sum;
	}
}