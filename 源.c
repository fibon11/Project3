#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int score;
	printf("Give Me score:");
	scanf_s("%d",&score);
	if (score < 60)
	{
		printf("E");
	}
	else if (score >= 60 && score <70 )
	{
		printf("D");
	}
	else if (score >= 70 && score < 80)
	{
		printf("C");
	}
	else if (score >= 80 && score < 90)
	{
		printf("B");
	}
	else
	{
		printf("A");
	}
	system("pause");
}