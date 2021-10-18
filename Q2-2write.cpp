/*
[Question 2]

In this program, we will manage the student information with the struct data type. 

This question requires you to make two program files. 

The first program is to prepare the binary file for the student information. Read the given text file “students.txt” file and then save it to the struct “Student”. After that, write the struct to the binary file “students.bin” as a binary format.


The second program reads the”studnet.bin” file in a binary format. If the average of student’s scores is greater than 50, we will print all student’s information.

Requirements

-> Do not use any “global” variable.
-> In the first program (Q2-2write.cpp), 
create the Struct “Student” pointer variable points to the memory space for a single Struct Student. Use a “new” operator to create the memory space and assign that address to the pointer.
Read a single line in the “students.txt” file and then save it to the Struct using the pointer variable.
students.txt: https://github.com/Kwooley/CS01/blob/master/ch09/students.txt (Links to an external site.) 
Write the Struct Student to the “students.bin” in a binary format
In the second program (Q2-2read.cpp), 
create the Struct “Student” pointer variable points to the memory space for a single Struct Student. Use a “new” operator to create the memory space and assign that address to the pointer.
Read the sizeof(Students) bytes in the “students.bin” file and then save it to the Struct using the pointer variable.
If the average of student’s scores is greater than 85, we will print all student’s information.

*/

#include <iostream>
#include <fstream>

using namespace std;

// create the Struct “Student” pointer variable points to the memory space for a single Struct Student. Use a “new” operator to create the memory space and assign that address to the pointer.
struct students{
  int idNumber;
  string name;
  int score[3];
};

int main(){

  fstream matrix, agents;

  students zion[10];

  int arraySize;
  int i = 0;

  string txtFileName = "students.txt";
  string binFileName = "students.bin";

  matrix.open(txtFileName, ios :: in);

  if(matrix){
    cout << "File " << txtFileName << " has been accessed." << endl << endl;
  } else cout << "File does not exsist";

  while(!matrix.eof()){
    for(int i = 0; i < sizeof(matrix); i++){
      matrix >> zion[i].idNumber;
      matrix >> zion[i].name;
      for(int y = 0; y < 3; y++){
        matrix >> zion[i].score[y];
      }
    }
  }

  matrix.close();

  for(int p = 0; p < 10; p++){
    cout << zion[p].idNumber << " ";
    cout << zion[p].name << " ";
    for(int y = 0; y < 3; y++){
      cout << zion[p].score[y];
    }
    cout << endl;
  }
/*
[Question 2]

In this program, we will manage the student information with the struct data type. 

This question requires you to make two program files. 

The first program is to prepare the binary file for the student information. Read the given text file “students.txt” file and then save it to the struct “Student”. After that, write the struct to the binary file “students.bin” as a binary format.


The second program reads the”studnet.bin” file in a binary format. If the average of student’s scores is greater than 50, we will print all student’s information.

Requirements

-> Do not use any “global” variable.
-> In the first program (Q2-2write.cpp), 
create the Struct “Student” pointer variable points to the memory space for a single Struct Student. Use a “new” operator to create the memory space and assign that address to the pointer.
Read a single line in the “students.txt” file and then save it to the Struct using the pointer variable.
students.txt: https://github.com/Kwooley/CS01/blob/master/ch09/students.txt (Links to an external site.) 
Write the Struct Student to the “students.bin” in a binary format
In the second program (Q2-2read.cpp), 
create the Struct “Student” pointer variable points to the memory space for a single Struct Student. Use a “new” operator to create the memory space and assign that address to the pointer.
Read the sizeof(Students) bytes in the “students.bin” file and then save it to the Struct using the pointer variable.
If the average of student’s scores is greater than 85, we will print all student’s information.

*/

#include <iostream>
#include <fstream>

using namespace std;

// create the Struct “Student” pointer variable points to the memory space for a single Struct Student. Use a “new” operator to create the memory space and assign that address to the pointer.
struct students{
  int idNumber;
  string name;
  int score[3];
};

int main(){

  fstream matrix, agents;

  const int size = 10;
  students *zion;

  int arraySize;
  

  string txtFileName = "students.txt";
  string binFileName = "students.bin";

  matrix.open(txtFileName, ios :: in);

  if(matrix){
    cout << "File " << txtFileName << " has been accessed." << endl << endl;
  } else cout << "File does not exsist";

  while(!matrix.eof()){
    students *zion =  new students[size];
    for(int i = 0; i < size; i++){
      matrix >> zion[i].idNumber;
      matrix >> zion[i].name;
      for(int y = 0; y < 3; y++){
        matrix >> zion[i].score[y];
      }
    }
    
    
    // for(int i = 0; i < sizeof(matrix); i++){
    //   matrix >> zion[i].idNumber;
    //   matrix >> zion[i].name;
    //   for(int y = 0; y < 3; y++){
    //     matrix >> zion[i].score[y];
    //   }
    // }
  }

  matrix.close();

  for(int p = 0; p < size; p++){
    cout << zion[p].idNumber << " ";
    cout << zion[p].name << " ";
    for(int y = 0; y < 3; y++){
      cout << zion[p].score[y];
    }
    cout << endl;
  }

  

  

  agents.open(binFileName, ios :: out | ios :: binary);

  agents.write(reinterpret_cast<char *>(&zion), sizeof(zion));
  

  // for(int a = 0; a < 10; a++){
  //   agents << zion[a].idNumber;
  //   agents << zion[a].name;
  //   for(int y = 0; y < 3; y++){
  //     agents << zion[a].score[y];
  //   }
  //   agents << endl; 
  // }

  agents.close();



}
  

  

  agents.open(binFileName, ios :: out | ios :: binary);

  agents.write(reinterpret_cast<char *>(&zion), sizeof(zion));
  

  // for(int a = 0; a < 10; a++){
  //   agents << zion[a].idNumber;
  //   agents << zion[a].name;
  //   for(int y = 0; y < 3; y++){
  //     agents << zion[a].score[y];
  //   }
  //   agents << endl; 
  // }

  agents.close();



}