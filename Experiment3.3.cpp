#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	cout << "*** SORTING ***" << endl;
	cout << endl << endl;
	
	//ARRAY SIZE and ARRAY CHARACTER INPUTS
	char x[15];
	int z;
	cout << "Please Input Desired Array Size: "; cin >> z;
	cout << endl;
	cout << "Please Input any Desired Character: ";
	
	//ARITHMETIC TO INPUT VALUES INSIDE ARRAY
	int y;
	for (y=0; y < z; y++)
	{
		cin >> x[y];
	}
	
	cout << endl << endl;
	cout << "SORTING IN DESCENDING ORDER..." << endl;
	cout << endl << endl;
	
	//ARITHMETIC OF BUBBLE SORTING
	int w, q, temp;
	for (w = 0; w < z; w++)
	{
		for (q = 0; q < z-w-1; q++)
		{
			if (x[q] < x[q+1])
			{
				temp = x[q];
				x[q] = x[q+1];
				x[q+1] = temp;
			}
		
		}
	}
	
	//OUTPUT ARITHMETIC
	int a;
	cout << "OUTPUT: ";
	for (a=0; a < y; a++)
	{
		cout << x[a];
	}
	cout << endl;
	
	cout << "The Array Size is " << z << "." << endl;
	
	
	
	
	getch();
	return 0;
}
