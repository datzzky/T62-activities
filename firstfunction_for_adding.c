/*
initillize variable sum, grdes, average and counter.
colect data from the user using a loop.
create function to sum collected data using sum = sum + grades.
create another function for averge using the formula average = sum / counter.
print the sum.
print the average.
*/

#include <stdio.h>

float sum, grades, Average;
int Counter;

float addGrades()
{
	sum = sum + grades;
	return grades = 0;
}
float  Avrg()
{
	Average = sum/Counter;
	return Average;
}
int main(){
	for(sum = 0, Counter =0; Counter <5;){
		printf("\nEnter your grade: ");
		scanf("%f", &grades);
		addGrades();
			
			Counter ++;
		}
		printf("\n\nthe total sum is: %.2f", sum);
		Avrg();
		printf("\n\nYour average is: %.2f", Average);
		
		getch();
	return 0;
}
