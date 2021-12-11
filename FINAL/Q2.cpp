/*
In this question, we will implement the Recursive Quick Sort program with the Class Course. We need to sort 10 Course objects based on the Course ID(sort key = ID). We will use the same class Course that was implemented in Question 1
Show the Recursion-Call hierarchy with the typical parameter values that were used.
example; the parameters in this example just denotes the range of the slit. 
Implement the full source program and show the results with the various test data.
*/

#include <iostream>
#include <fstream>
#include "Course.hpp"

int partition (Course array[], int , int );
void quickSort(Course array[], int, int );
void swap(int* a, int* b);
void displayArray(Course arr[], int size);

int main() {

  fstream FILE_IN;
  Course lessons[10];

  int selection;
  cout << "Please Select a file to search: " << endl;
  cout << "1. CourseSet1.txt" << endl;
  cout << "2. CourseSet2.txt" << endl;
  cout << "3. CourseSet3.txt" << endl;
  cout << endl;
  cout << "Search file: ";
  cin >> selection;

  cout << endl;

  switch(selection){
    case 1: fileName = "CourseSet1.txt";
            cout << "Sorting CourseSet1.txt" << endl;
            break;
    case 2: fileName = "CourseSet2.txt";
            cout << "Sorting CourseSet2.txt" << endl;
            break;
    case 3: fileName = "CourseSet3.txt";
            cout << "Sorting CourseSet3.txt" << endl;
            break;
    default: cout << "File selection is not valid." << endl;
  }
  
  cout << endl;

  for(int i = 0; i < COURSES; i++){
    FILE_IN >> lessons[i];
    
  }

  int n = sizeof(lessons)/sizeof(lessons[0]);

  quickSort(lessons, 0, n-1);
  
  displayArray(lessons,n);
  
} 

void swap(Course* a, Course* b) 
{ 
    Course t = *a; 
    *a = *b; 
    *b = t; 
} 

// partition the array using last element as pivot
int partition (Course array[], int low, int high) 
{ 
    int pivot = array[high].getID();    // pivot 
    int i = (low - 1);   
   
    for (int j = low; j <= high- 1; j++) 
    { 
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (array[j].getID() <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&array[i], &array[j]); 
        } 
    } 
    swap(&array[i + 1], &array[high]); 
  return (i + 1); 
} 

