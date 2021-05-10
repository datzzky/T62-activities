#include <stdio.h>
#define MAX_SIZE 10
#define Min_SIZE 5

/* Function declaration to find sum of array */
int sum(int arr[], int start, int len);


int main()
{
    int arr[MAX_SIZE];
    int size, index, sumofarray;
    
    
    /* Input size and elements in array  */
    printf("Enter size of the array from 5 to 10: ");
    scanf("%d", &size);
    while(size < Min_SIZE|| size > Min_SIZE)
	{
		printf("Enter size of the array from 5 to 10: ");
   		scanf("%d", &size);
	}
    for(index = 0; index < size; index++)
    {
    	printf("Enter a number: ");
        scanf("%d", &arr[index]);
    }
    
    
    sumofarray = sum(arr, 0, size);
    printf("Sum of array elements: %d", sumofarray);
    
    return 0;
}


/**
 * Recursively find the sum of elements in an array.
 */
int sum(int arr[], int start, int len) 
{
    /* Recursion base condition */
    if(start >= len)
        return 0;
        
    return (arr[start] + sum(arr, start + 1, len));
}