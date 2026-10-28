#include <stdio.h>
int main (void)
{
	int mark1,mark2,mark3;
	float avg;

	printf("Enter mark1:");
	scanf("%d",&mark1);
	printf("Enter mark2:");
	scanf("%d",&mark2);
	printf("Enter mark3:");
	scanf("%d",&mark3);

	avg = (mark1+mark2+mark3)/3;

	if( mark1>70 && mark2>70 && mark3>70 && avg>75)
	{
		printf("Pass\n");
	}
	else
	{
		printf("Fail\n");
	}
	return 0;
}
