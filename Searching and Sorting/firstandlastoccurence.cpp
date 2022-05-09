// find the first and last occur in tghe osrted array
// driver code
// logn better thn linear search of n
#include <iostream>
int first(int arr[], int low, int high, int x, int n)
{
       int result = 0;
       if (high >= low)
       {
              int mid = low + (high - low) / 2;

              if (x == arr[mid])
              {
                     result = mid;
                     low = mid - 1;
              }
              else if (x < arr[mid])
                     low = mid - 1;
              else
                     high = mid + 1;
       }
       return result;
}
int first(int arr[], int low, int high, int x, int n)
{
       int result = 0;
       if (high >= low)
       {
              int mid = low + (high - low) / 2;

              if (x == arr[mid])
              {
                     result = mid;
                     high = mid + 1;
              }
              else if (x < arr[mid])
                     low = mid - 1;
              else
                     high = mid + 1;
       }
       return result;
}
int main()
{
       int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
       int n = sizeof(arr) / sizeof(int);

       int x = 8;
       printf("First Occurrence = %d\t",
              first(arr, 0, n - 1, x, n));
       printf("\nLast Occurrence = %d\n",
              last(arr, 0, n - 1, x, n));

       return 0;
}