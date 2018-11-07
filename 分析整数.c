#include<stdio.h>
#include<math.h>
int main()
{
	int in,i,a[5],b,e;
	int n=0;
	scanf("%d",&in);
	b=in;
	do
	{
		b=b/10;
		n++;
	}while(b>0);
	printf("%d\n",n);
	e=pow(10,n-1);
	for(i=0;i<n;i++)
	{
		a[i]=in/e;
		in %= e;
		e/=10;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i!=n-1)
			printf(" ");
	}
	printf("\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
		if(i!=0)
			printf(" ");
	}
	return 0;
}
