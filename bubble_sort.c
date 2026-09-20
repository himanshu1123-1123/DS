#include <stdio.h>  
void bubbleSort(int arr[], int n) 
{     
    int i, j, temp;
// Traverse through all array elements     
    for (i = 0; i < n - 1; i++) 
    {         
// Last i elements are already in place
 for (j = 0; j < n - i - 1; j++) 
 {             
// Swap if the element is greater than the next
if (arr[j] > arr[j + 1]) 
{  
     temp = arr[j];            
     arr[j] = arr[j + 1];            
     arr[j + 1] = temp;            
}       
}     
}
}
  // Function to print the array 
  
  void printArray(int arr[], int size) 
  {     
    int i;     
    for (i = 0; i < size; i++)
             printf("%d ", arr[i]);
                  printf("\n"); }  
// Main function 
int main() 
{     
    int arr[] = {32, 35, 432, 52, 91};
         int n = sizeof(arr) / sizeof(arr[0]);
               printf("actual array: \n");
                    printArray(arr, n);
                          bubbleSort(arr, n);
                                printf("SORTED array: \n");
                                     printArray(arr, n);
                                          return 0; } 