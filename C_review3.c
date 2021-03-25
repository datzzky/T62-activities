#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	switch(num > 0) //1 means true and zero means false
       {
		case 0:
			switch(num <0)//a nested switch is use to validate the value lessthan zero and print as negative int.
			{
				case 1:
						printf("Negative Integer");
						break;
				case 0:
						printf("Zero number");
						break;
			}
			break;
        case 1:
               printf("positive Integer");
			   break;
		default:
				printf("invalid Value");
				break;
  
        }
		getch();
	return 0;
}
