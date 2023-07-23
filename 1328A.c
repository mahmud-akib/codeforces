#include<stdio.h>

int main() 
{

int t;
scanf("%d", &t);

while(t--)
{
	
	int x,y;
	scanf("%d%d", &x, &y);
	
	if(x%y==0) 
	{
	printf("0\n");
	}
	else {
	
	int w=x%y;
	
	printf("%d\n", y-w);
	
	}
}


	return 0;
}
