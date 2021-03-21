#include <stdio.h>

int main(){
	int num_1, num_2, result;
	char choice;
	printf("Enter two numbers to calculate\n"
			"\nEnter + to add"
			"\nEnter - to subtract"
			"\nEnter * to multiply"
			"\nEnter / to devide"
			"\n\nnum 1, operator, num2: "
	       );
	scanf("%d %c %d", &num_1, &choice, &num_2);
		if(choice == '+')
		{
			result = num_1 + num_2;
		}
		else if(choice == '-')
		{
			result = num_1 - num_2;
		}
		else if(choice == '*')
		{
			result = num_1 * num_2;
		}
		else if(choice == '/')
		{
			result = num_1 / num_2;
		}
		printf("\nresult = %d", result);
		getch();
		return 0;
	}
