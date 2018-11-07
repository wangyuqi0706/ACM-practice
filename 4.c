#include<stdio.h>
#include<math.h>
int a,b,c;
void judge(int x,int y,int z)
{
	int t;
	if(x<y)
    {t=x;x=y;y=t;}
    if(y<z)
    {t=y;y=z;z=t;}
    if(x<y)
    {t=x;x=y;y=t;}
    a=x,b=y,c=z;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		judge(a,b,c);
		if(c+b>a)
		{
			double p=(a+b+c)/2;
			double s=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("%.2lf\n",s);
		}
		else
			printf("error\n");
	}
	return 0;
}
