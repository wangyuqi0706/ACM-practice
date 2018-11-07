#include<stdio.h> 
int main()
{
	int x,y,n,i,isPrime=1,allprime=1,num;
	while(scanf("%d %d",&x,&y) != EOF)
	{	
		if(x==0&&y==0){
			goto end;
		}
		allprime=1;
		
		for(n=x;n<=y;n++)
		{
			isPrime=1;
			num=n*n+n+41;
			for(i=2;i<num;i++)
			{
				if(num%i==0)
				{		
				isPrime=0;
				break;
				}
			}
			if(isPrime==0)
			{
				allprime=0;
				break;
			}
		}
		if(allprime==1)
		printf("OK");
		else
		printf("Sorry");
		printf("\n") ;
	}
	end:
	return 0;
}