#include <stdio.h>
#include <stdlib.h>
#define MAX 5
/*files*/
FILE * data;
/*variable section*/
char txt_in[10];
char txt_out[10];
char opt;
int i;
/*function section*/
void write();
void display();
/*body*/
int main()
{

		write();
		system("cls");
		printf("\tText from the file[MyFile.txt]\n\n");
		display();
	return 0;
}

void write()
{
	data = fopen("MyFile.txt", "w");
	if(data == NULL)
	{
		printf("cannot open the file!");
	}else{
	for(i =0;i < MAX; i++)
	{
		printf("Input Data: " );
		scanf("%s\n", txt_in);
		fprintf(data, "%s\n", txt_in);
	}
		fclose(data);
}
	
	printf("write succes! press any key to confirm");
	getchar();
/*I used getchar to make a short delay este when the function is exited it did'nt write anything.*/
}

void display()
{
	data = fopen("MyFile.txt", "r");
	if(data == NULL)
	{
		printf("\t\t<access denied!>\n\n");
		exit(1);
	}else
	{
		for(i =0;i < MAX; i++)
		{
			fscanf(data,"%s", txt_out);
			printf("%s\n", txt_out);
		}
	}
	fclose(data);
}
