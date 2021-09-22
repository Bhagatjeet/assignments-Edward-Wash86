#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students {
	int 	sid;
	char 	sname[MAX_LEN];
	double 	scores[NUM_SCORES];
};

void bubbleSortbyID(Students [], int );
void bubbleSortbyName(Students [], int );
void bubbleSortbyScores(Students [], int );
void makeStudents(Students [], int );
void printStudents(Students [], int );

int main()
{
	const int 	N = 10;
	Students 	s[N];
  fstream infile;

	makeStudents(s, N);
  
  cout << endl;

	cout << "Initial Student's Struct Array \n";
	printStudents(s, N);
  cout << endl;
	bubbleSortbyID(s, N);
	cout << "After Sorting by ID \n";
	printStudents(s, N);
  cout << endl;
	bubbleSortbyName(s, N);
	cout << "After Sorting by Name \n";
	printStudents(s, N);
  cout << endl;
	bubbleSortbyScores(s, N);
	cout << "After Sorting by Scores \n";
	printStudents(s, N);
  cout << endl;

  return 0;
}

void bubbleSortbyID(Students s[], int N)
{
  for(int i = 0; i < N - 1; i++){
    for(int j = 0; j < N - i - 1; j++)
      if(s[j].sid > s[j + 1].sid){
        swap(s[j], s[j + 1]);
    }
    
  }

  // for(int i = 0; i < N - 1; i++){
    
  // }

  
  /*
  N = the number of elements
  repeat N times
  if array[i] > array[i + 1]
    swap(array[i], array[i+1]) 
  */
}

void bubbleSortbyName(Students s[], int N){
  for(int i = 0; i < N - 1; i++){
    for(int j = 0; j < N - i - 1; j++)
      if(s[j].sname[0] > s[j + 1].sname[0]){
        swap(s[j], s[j + 1]);
    }
    
  }
}

void bubbleSortbyScores(Students s[], int N){

  for(int i = 0; i < N - 1; i++){
    for(int j = 0; j < NUM_SCORES; j++){
      if(s[j].scores[j] > s[i].scores[j + 1])
        swap(s[i].scores[j], s[i].scores[j + 1]);

    cout << s[i].scores[j] << " ";
    }
    cout << endl;
  }
    
      
  

  // for(int i = 0; i < N - 1; i++)
  //   for(int j = 0; j < N - i - 1; j++)
  //     if(s[j].scores[0] > s[j + 1].scores[0])
  //       swap(s[j], s[j + 1]);
      
}

void makeStudents(Students s[], int N){
	fstream records;

  records.open("students.txt", ios:: in);

  if(records){
    cout << "File has been opened and read." << endl;
  }

  while(!records.eof()){
    for(int i = 0; i < sizeof(records); i++){
      records >> s[i].sid;

      records >> s[i].sname;

      for(int j = 0; j < NUM_SCORES; j++)
        records >> s[i].scores[j];

      
      
    } 
    records.close();
  } 

  if(!records){
    cout << "File has been closed" << endl;
  }

}

void printStudents(Students s[],int N){
	for(int i=0;i<N-1;i++){
		cout << s[i].sid << "\t" << s[i].sname << "\t";
		for(int j=0; j < NUM_SCORES; j++){
			cout <<  s[i].scores[j] << "\t";
    }
    cout << endl;
	}
	cout << "==== End of Record === \n";
}
