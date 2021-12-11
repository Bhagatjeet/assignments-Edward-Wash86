/*
[Question #1] Implement the binary search program[30]

In this question, we will implement the binary search program(your choice of iterative or recursive). The search target value is a Class Course object. The class Course has the following member data and functions.

Course ID: integer
Course name: string
Course credit: integer
Constructor and Member functions that would be necessary to be used in this question

In this program, we should manage 10 course objects.
To set up 10 object values, you can use the text file from input data.
Create the binary search function to find a certain course with the course ID.
Before calling this function, the course objects should be sorted based on the ID value.

Implement the full source program and show the results with the various test data.

*/

#include <iostream>
#include <fstream>
#include "Course.cpp"

Course recursiveBinarySearch(int , Course array[], int , int );
Course iterativeBinarySearch(Course array[], int, int);
void bubbleSortbyID(Course array[], int );

using namespace std;

static int POS;
const int COURSES = 10;

void operator>>(fstream& FILE_IN, Course& array){
  int id;
  string name;
  int credit;
  
  FILE_IN.open("FINAL/CourseSet1.txt", ios :: in);

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

int main() {

  fstream FILE_IN;
  Course lessons[10];

  int find;
  cout << "Enter a ID number: ";
  cin >> find;
  cout << endl;

  cout << "Data Set Information: " << endl;
  for(int i = 0; i < COURSES; i++){
    FILE_IN >> lessons[i];
    
  }
  
  bubbleSortbyID(lessons, COURSES);

  for(int i = 0; i < COURSES; i++){
    
    cout << lessons[i] << endl;
  }
  
  // int numbers[] = {2,4,5,7,8,9,10,15,16,90,105};
   int size = sizeof(lessons)/sizeof(lessons[0]);

  // cout << size << endl;

  Course result;

  result = recursiveBinarySearch(find, lessons, 0, COURSES-1);
  // // first pushing result  = recursiveBinarySearch(2, numbers[0], 0, numbers[size-1)];

  cout << endl;
  cout << "Recursive Search Found: " << endl;
  cout << result;

  cout << endl;
  
  result = iterativeBinarySearch(lessons,size-1,find);
  cout << endl;
  cout << "Iterative Search Found: " << endl;
  cout << result;

  
} 

Course recursiveBinarySearch(int target, Course array[], int first, int last){
  Course retry;

  if(first > last)
    return Course();
  else{
    int middle = (first + last) / 2;
    if(target == array[middle].getID())
      retry = array[middle];
    else if (target < array[middle].getID())
      retry = recursiveBinarySearch(target, array, first, middle - 1);
    else 
      retry = recursiveBinarySearch(target, array, middle + 1, last);

  }   
  return retry;
}
//Notes: This algorithim takes the array/vector and cuts it in half and begins to search the half the the target should reside, this splitting method will continue until the target vale has been pinpointed. This recursive method recalls itself with modified peramiters to search the section that the target reside and will repeat this process target has been found. If the target is not in the array/vector the function will return a value that will indicate that the value could not be found.

Course iterativeBinarySearch(Course array[], int N, int target){
  bool found = false;
  int first = 0;
  int mid = 0;
  int last = N;
  Course result;

  while(first <= last && !found){
    mid = (first + last) / 2;
    if(target > array[mid].getID())
      first = mid + 1;
    else if(target < array[mid].getID())
      last = mid - 1;
    else 
      found = true;
      result = array[first];
  }
  return result;

}

//Notes: This function is controlled by a while-loop and will cycle through the body of the function until the argument is no longer true.

void bubbleSortbyID(Course array[], int N){
  for(int i = 0; i < N; i++){
    for(int q = 0; q < N; q++){
      Course temp;
      if(array[i].getID() < array[q].getID()){
        temp = array[i];
        array[i] = array[q];
        array[q] = temp;
      }
      
    }
  }
}