#include <iostream>

void makeArray(int array[], int);
void printArray(int array[], int);

int main(){
  
}

void makeArray(int array[], int N){
  for(int i = 0; i < N; i++){
    array[i] = rand() % 101;
  }
}

void printArray(int array[], intN ){

}

void selectSort(int array[], int N)

#include <iostream>
using namespace std;

int findMin(int [], int, int);

int main()
{
	const int N = 10;
	int numbers[N] = {25, 10, 15, 30, 35, 40, 45, 55};

	for(int i=0;i<N-1;i++)
    {
        int minidx;
        minidx= findMin(numbers, N, i); // Find the i_th smallest number
		swap(numbers[i], numbers[minidx]);
	}

}

int findMin(int numbers[], int N, int ith)
{

	return ith;
}



int findMin(int numbers[], int N, int ith)
{
	int min, minidx, i;
	min = numbers[ith];
    for(i=ith ;i<N;i++)
	{
		if ( min > numbers[i] )
		{
			min = numbers[i];
			minidx = i;
		}
	}
	return i; // 1
}


