//Maximum and minimum of an array using minimum number of comparisons
#include<stdio.h>
int main()
{
  int array[] = {1,2,32,85,5,8} ; 
  int n =  sizeof(array)/sizeof(array[1]);
  int max , min ; 
  if(n==1)
  {
      max = array[0];
      min = array[0];
  } 
  else{
      if(array[0] > array[1])
      {
          max = array[0];
          min = array[1]; 
      }
      else
      {
          max=array[1];
          min=array[0]; 
      }
      for(int i=2 ; i<n ; i++)
      {
          if(array[i]>max)
          {
              max = array[i];
          }
          if(array[i]<min)
          {
              min = array[i] ; 
          }
      }
  }
  printf("So The Maxiumum Value in the array is %d\n", max);
  printf("So The Minimum Value iun the array is %d", min);

}