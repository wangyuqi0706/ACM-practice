#include<stdio.h>
int main()
{
	int n,m,i,j,data[100],min,min2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&data[j]);
			if(j==0)
				min=data[j];
			if(data[j]<min)
				min=data[j];
		}
		int p=0;
		for(j=0;j<m;j++)
		{
			if(data[j]>min)
			{
				if	(p==0)
					min2=data[j];
				if(data[j]<min2)
					min2=data[j];
				p++;
			}
		}
		if(p==0)
			printf("ERROR\n");
		else
			printf("%d\n",min2);
	}
	return 0;
}
