#include <iostream>
#include <fstream>
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

	makeStudents(s, N);
	cout << "Initial Student's Struct Array \n";
	printStudents(s, N);
	bubbleSortbyID(s, N);
	cout << "After Sorting by ID \n";
	printStudents(s, N);
	bubbleSortbyName(s, N);
	cout << "After Sorting by Name \n";
	printStudents(s, N);
	bubbleSortbyScores(s, N);
	cout << "After Sorting by Scores \n";
	printStudents(s, N);
}

void bubbleSortbyID(Students s[], int N)
{
  for(int i = 0; i < N; i++){
    if(s[i].sid > s[i + 1].sid)
      swap(s[i], s[i + 1]);
  }
  /*
  N = the number of elements
  repeat N times
  if array[i] > array[i + 1]
    swap(array[i], array[i+1]) 
  */
}

void bubbleSortbyName(Students s[], int N)
{
  // for(int i = 0; i < N; i++){
  //   if(s[i] > s[i +1])
  //     swap(s[i], s[i + 1]);
}

void bubbleSortbyScores(Students s[], int N)
{
//  for(int i = 0; i < N; i++){
//     if(s[i] > s[i +1])
//       swap(s[i], s[i + 1])
}

void makeStudents(Students s[], int N)
{
	newfile.open("students.txt", ios:: in);

  if(newfile){
    cout << "File has been opened and read." << endl;
  }

  while(!newfile.eof()){
    for(int i = 0; i < sizeof(newfile); i++){
      newfile >> s[i].id;

      newfile >> s[i].name;

      newfile >> s[i].score1;

      newfile >> s[i].score2;
      
    } 
    newfile.close();
  } 

  if(!newfile){
    cout << "File has been closed" << endl;
    }
}

void printStudents(Students s[], int N){
	for(int i=0;i<N;i++){
		cout << s[i].sid << "\t" << s[i].sname << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  s[i].scores[j] << "\t";
		  cout << endl;
	}
	cout << "==== End of Record === \n";
}
