#include<stdio.h>
int main()
{
	int i,n;
	for(i=1;i<=9;i++)
	{
		for(n=1;n<=i;n++)
		{
			printf("%d*%d=%d",i,n,i*n);
			if(n!=i)
				printf(" "); 
		} 
		printf("\n"); 
	}
	return 0;
}
