#include <stdio.h>

int main(){
	float num_1, num_2, sum, product, Deference , qoutient;
	printf("Enter two numbers to calculate\n"
	       );
	scanf("%f %f", &num_1, &num_2);
		sum = num_1 + num_2;
		Deference  = num_1 - num_2;
		product = num_1 * num_2;
		qoutient = num_1 / num_2;
		printf("\nsum = %.2f\nproduct = %.2f\ndeference = %.2f\nqoutint = %.2f", sum, product, Deference , qoutient);
		getch();
		return 0;
	}