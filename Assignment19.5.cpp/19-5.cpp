#include <iostream>
using namespace std;
// Swap two elements - Utility function  
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
   
// partition the array using last element as pivot
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);   
   
    for (int j = low; j <= high- 1; j++) 
    { 
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
   
//quicksort algorithm
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        //partition the array 
        int pivot = partition(arr, low, high); 
   
        //sort the sub arrays independently 
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
} 
   
void displayArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 
   
int main() 
{ 
    int arr[] = {1,8,5,9,4,3,7}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<"Input array"<<endl;
    displayArray(arr,n);
    cout<<endl;
    quickSort(arr, 0, n-1); 
    cout<<"Array sorted with quick sort"<<endl; 
    displayArray(arr,n); 
    return 0; 
}


/*
//pseudocode for quick sort main algorithm
procedure quickSort(arr[], low, high)
    arr = list to be sorted
    low – first element of array
    high – last element of array
begin
    if (low < high)
    {
       // pivot – pivot element around which array will be partitioned  
        pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);  // call quicksort recursively to sort sub array before pivot
        quickSort(arr, pivot + 1, high); // call quicksort recursively to sort sub array after pivot
    }
end procedure
//partition procedure selects the last element as pivot. Then places the pivot at the correct position in 
//the array such that all elements lower than pivot are in the first half of the array and the //elements higher
 than pivot are at the higher side of the array.
procedure partition (arr[], low, high)
begin
    // pivot (Element to be placed at right position)
    pivot = arr[high];  
     i = (low - 1)  // Index of smaller element
    for j = low to high
    {
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
*/