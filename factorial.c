#include<stdio.h>
#include<conio.h>

void main()
{
	int a,i=1,b;
	
	printf("enter a number:\n");
	scanf("%d",&a);

for(b=1; b<=a; b++)

{
	i=i*b;
}

printf("%d",i);

getch();
}
