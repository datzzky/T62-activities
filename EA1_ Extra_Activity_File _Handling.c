#include <stdio.h>
#include <stdlib.h>
/*variable section*/
char Name[25];
int age,i, j, sub_size, id_Num;
char sub[][10] = {/*subject array*/
	"MATH",	"SCEINCE",	"ENGLISH"};
float sum, avrg;
/*file section*/
FILE *studnt_ptr;
char stdnts_files[][15] ={ "file1.txt", "file2.txt"};
int main()
{
/*this is to get the total number of subject array.*/
	int sub_size = sizeof(sub)/sizeof(sub[0]);
/*this to get the total number of file array.*/
	int files_count = sizeof(stdnts_files)/sizeof(stdnts_files[0]);
/*this loop is keep on repeating until last txt file is finish.*/
	int grades[sub_size];/*local varialble for grades*/
	while(j < files_count)
	{
		printf("\t\tInput Data for File %d\n\n", j+1);
		printf("Input Name: ");
		fgets(Name, sizeof(Name), stdin);
		printf("Input ID no.: ");
		scanf("%d", &id_Num);
		printf("Input Age: ");
		scanf("%d", &age);
		studnt_ptr = fopen(stdnts_files[j], "w");
		fprintf(/*/to print into the file*/
		studnt_ptr,
		"Name: %sID No.:%d\nage: %d\n",
		Name, id_Num, age
		);
/*for loop is use to get and print the grades.*/
		printf("Enter grades\n");
	for(i = 0; i < sub_size; i++)
	{
		printf("%s : ", sub[i]);
		scanf("%d", &grades[i]);
		fprintf(studnt_ptr,
		"%s: %d\n",
		sub[i], grades[i]);
		sum = sum + grades[i];
	}	
	avrg = sum/sub_size;
	fprintf(studnt_ptr, "sum: %.2f\naverage: %.2f", sum, avrg);
	fclose(studnt_ptr);
	sum =0;/*this is to set back the sum into 0*/
	avrg = 0; /*same as sum*/ 
	j++;
	system("cls");
	}
	printf("done!");
	return 0;
}
/*


*/

