//program to reverse an array
#include<stdio.h>
#include<stdlib.h>

void reversethearray(int arr[] , int start , int end )
{
    int temp ; 
    while(start<end)
    {
        temp = arr[start] ; 
        arr[start]= arr[end]; 
        arr[end]= temp ; 
        start++ ; 
        end--;
     }
}
void printarray(int arr[], int n)
{
    int i ;
    for(i=0 ; i<n ; i++)
    {
        printf("%d" , arr[i]) ;
        printf("\n");
    }
}
int main()
{
    int array[]= {1 ,2 ,3 ,4, 5, 6 } ;
    int n = sizeof(array)/sizeof(array[0]) ; 
    reversethearray(array , 0 , n-1) ; 
    printf("Reverse array is");
    printarray(array , n );
    return  0 ; 
}
//using a recursion 
// Recursive C program to reverse an array
#include <stdio.h>

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
int temp;
if (start >= end)
	return;
temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
rvereseArray(arr, start+1, end-1);
}	

/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
	printf("%d ", arr[i]);

printf("\n");
}

/* Driver function to test above functions */
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	printArray(arr, 6);
	rvereseArray(arr, 0, 5);
	printf("Reversed array is \n");
	printArray(arr, 6);
	return 0;
}
