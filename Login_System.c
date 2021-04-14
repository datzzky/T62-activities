#include <stdio.h>
#include <stdlib.h>
int pin, id_num, Num_of_users, i;
// array of users
int Users[][2] ={
	{200110, 2468},
	{200111, 1357},
	{200112, 1234}
};
void validate_id(int id_num);
void pin_validate(int i, int pin);
int main()
{
//calculating the actual size of rows
	Num_of_users = sizeof(Users) / sizeof(Users[0]);

	printf("Enter your id number: ");
	scanf("%d", &id_num);
	validate_id(id_num);
    return 0;
}
// use to valiate id numbers
void validate_id(int id_num)
{
	for(i = 0;i < Num_of_users;i++)
	{
		if(id_num == Users[i][0])
		{
			printf("Enter your pin: ");
			scanf("%d", &pin);
			pin_validate(i, pin);
			break;
		}
		if(!(id_num == Users[i][0]))
		{	if(i == Num_of_users - 1)
			{
				printf("ID is not listed\n");
				printf("Enter your id number: ");
				scanf("%d", &id_num);
				validate_id(id_num);
				break;
			}
		}
	}
}
void pin_validate(int i, int pin)
{
	system("cls");
	if(pin == Users[i][1])
	{
		printf("You are now login\n");
	

	}
	if(!(pin == Users[i][1]))
	{
		printf("Incorect pin re enter\n");
		printf("Enter your pin: ");
		scanf("%d", &pin);
		pin_validate(i, pin);
	}
}
/*
explaination
for loop in the function "validate_id" is use to look for the list of id number in the rows of index 0.
the pin_validate function is use to validate pin using the index valu of [i][1] where i is the users id index posistion.
