# include <stdio.h>
#include <stdlib.h>	
int main(){
	char Name[30]; int age;
	printf("Enter your Name: ");
	fgets(Name, sizeof(Name), stdin);  // read string
	printf("\nEnter your age: ");
	scanf("%d", &age);
	system("cls");
	printf("\nName: ");
	puts(Name);
	printf("age: %d", age); 
	if(age < 18)
	{
		printf("\nYou are not eligible for voting.");
	}
	else
	{
		printf("\n\nYou are eligible for voting.");
	}
		getch();
	return 0;
}