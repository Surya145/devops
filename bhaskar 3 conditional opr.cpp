#include<stdio.h>
int main()
{
	int a,b,c, big;
	printf("\n Enter three numbersfor a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	big=a>b?(a>c?a:c):(b>c?b:c);
	printf("Greater among the three numbers=%d",big);
	return 0;
}


