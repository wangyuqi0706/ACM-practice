#include<stdio.h>
int main ()
{
	int n,data[100],i,min,x,mark;
	while(scanf("%d",&n) != EOF)
	{
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&data[i]);
		} 
		min=data[0];
		mark=0;
		for(i=0;i<n;i++)
		{
			if(data[i]<min)
			{
				min=data[i];
				mark=i;
			}
		}
		x=data[0];
		data[0]=min;
		data[mark]=x;
		for(i=0;i<n;i++)
		{
			printf("%d",data[i]);
			if(i!=n-1)
			printf(" ");	 
		}
		printf("\n");
	}
 } 
