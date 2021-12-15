/*
In this question, we will implement the Recursive Quick Sort program with the Class Course. We need to sort 10 Course objects based on the Course ID(sort key = ID). We will use the same class Course that was implemented in Question 1
Show the Recursion-Call hierarchy with the typical parameter values that were used.
example; the parameters in this example just denotes the range of the slit. 
Implement the full source program and show the results with the various test data.
*/

#include <iostream>
#include <fstream>
#include "Course.cpp"

int partition (Course array[], int , int );
void quickSort(Course array[], int, int );
void swap(int* a, int* b);
void displayArray(Course arr[], int size);

static int POS;
static string fileName;
const int COURSES = 10;

void operator>>(fstream& FILE_IN, Course& array){
  int id;
  string name;
  int credit;
  
  FILE_IN.open(fileName, ios :: in);

  FILE_IN.seekg(POS);

  FILE_IN >> id;
  FILE_IN >> name;
  FILE_IN >> credit;

  array.setID(id);
  array.setName(name);
  array.setCredit(credit);

  POS = FILE_IN.tellg();
  POS += 1;

  FILE_IN.close();
  
}

ostream& operator<<(ostream& COUT, Course& LESSONS){
  COUT << LESSONS.getID() << " ";
  COUT << LESSONS.getName() << " ";
  COUT << LESSONS.getCredit() << " ";
  return COUT;
}

using namespace std;

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
    case 1: fileName = "FINAL/CourseSet1.txt";
            cout << "Sorting CourseSet1.txt" << endl;
            break;
    case 2: fileName = "FINAL/CourseSet2.txt";
            cout << "Sorting CourseSet2.txt" << endl;
            break;
    case 3: fileName = "FINAL/CourseSet3.txt";
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

  cout << "To View the Recursion-Call hierarchy: Q2.draw" << endl;
  
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
  int pIndex = low;
  int pivot = array[high].getID();
  int i;
  for(i = low; i < high; i++)
  {
      if(array[i].getID() < pivot)
      {
          swap(&array[i], &array[pIndex]);
          pIndex++;
      }
  }
  swap(&array[high], &array[pIndex]);
  return pIndex;  
} 

void quickSort(Course *array, int low, int high) 
{ cout << low << " " << high << endl;
    if (low < high) 
    { 
        //partition the array 
        int pivot = partition(array, low, high); 
   
        //sort the sub arrays independently 
        quickSort(array, low, pivot - 1);
         
        quickSort(array, pivot + 1, high);
        
    } 
} 

void displayArray(Course array[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << array[i] << endl; 
      
} 

/*
I am very proud of the section I built that allows a user to use my program with a selection of files. The assignment was pretty straightforward, the examples found in the book and the slides did help me understand the qsort function but I can honestly say that I do not have a comprehensive understanding of the recursion that takes place.


*/