#include "Numbers.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    
	Number n1(5);

	n1.setElement();
	n1.printOut();
	cout << "Size " << n1.getSize() << endl;
	cout << "Sum " << n1.getSum() << endl;


	Number n2(10);

	for( int i=0;i<10; i++)
		n2.setElement(i,i*10);

	n2.printOut();




	
}
