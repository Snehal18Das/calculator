#include<stdio.h>
int main()
{
	int n1,n2,result;
	char operation;
	
	printf("Enter number 1.");
	scanf("%d",&n1);
	printf("\nEnter operation.");
	scanf(" %c",&operation);
	printf("Enter number 2.");
	scanf("%d",&n2);
	
	switch(operation)
	{
		case '+':
			result=n1+n2;
			break;
		
		case '-':
			result=n1-n2;
			break;
			
		case '/':
			result=n1/n2;
			break;
			
		case '*':
			result=n1*n2;
			break;
			
		default:
			result=0;
			break;
	}
	printf("Result: %d",result);
	return 0;
}