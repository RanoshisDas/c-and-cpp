#include<stdio.h>
int main()
{
	int exit = 0;
	int a,b;
	char c;
	while(!exit)
    {
	printf("enter 1st number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
    printf("enter oparetor:");
	scanf(" %c",&c);
	switch (c)
	{ case '+':
		printf("%d + %d= %d",a,b,a+b);
		break;
	case '-':
		printf("%d - %d= %d",a,b,a-b);
		break;
	case '*':
		printf("%d * %d= %d",a,b,a*b);
		break;
	case '/':
		printf("%d / %d= %d",a,b,a/b);
	    break;
	default :
		printf("invalit oparetor");
	}
	  printf("\nExit? \nYes(1) No(0):");
        scanf("%d",&exit);
    }

	return 0;
}
