#include<stdio.h>
#include<string.h>
int main()
{
	char data[1000];
	int i,n,max,length;
	while(scanf("%s",&data) != EOF)
	{
		max=0;
		length=strlen(data);
		for(i=0;i<length;i++)
		{
			if(data[i]>max)
				max=data[i];
		}
		for(i=0;i<length;i++)
		{
			printf("%c",data[i]);
			if(data[i]==max)
				printf("(max)");
		} 
		printf("\n");
	}
	return 0;
}
