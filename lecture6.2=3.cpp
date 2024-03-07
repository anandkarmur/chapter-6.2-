#include<stdio.h>

main()
{
	int i,n;
	printf("enter the value = ");
	scanf("%d",&n);
	
	do
	{		
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}while(i<=n);
}