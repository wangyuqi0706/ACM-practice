#include<stdio.h>
int main()
{
	char a,b,c,least,mid,most,more,less; 
	while(scanf("%c %c %c",&a,&b,&c) != EOF)
	{	
		getchar(); 
		if(a>b)
		{
			more=a;
			less=b;
		}
		else if(a<b)
		{
			more=b;
			less=a;
		}   
		else 
		{
			more=less=a;
		}
		
		if(c>more)  
		{
			most=c;
			mid=more;
			least=less;
		}
		else if(c<less)
		{
			least=c;
			most=more;
			mid=less;
		}      
		else
		{
			most=more;
			mid=c;
			least=less;
		}
		
		printf("%c %c %c\n",least,mid,most);

	} 
	
	return 0;
}