#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	cout << "*** TEMPERATURE ***" << endl;
	cout << endl << endl;
	
	cout << "Please Enter the Temperature of Provinces A, B, and C for a week." << endl;
	cout << endl;
	
	char P[3] = {'A', 'B', 'C'};
	int x, y[7];
	for (x = 0; x < 3; x++)
	{
		int z;
		for (z=0; z < 7; z++)
		{
			cout << "Province " << P[x] << ", Day " << z+1 << ": "; cin >> y[z];
		}
	}
	cout << endl << endl;
	
	cout << "PROCESSING..." << endl;
	cout << endl << endl;
	
	cout << "Displaying Values:" << endl;
	cout << endl;

	int w;
	for (w = 0; w < 3; w++)
	{
		int q;
		for (q = 0; q < 7; q++)
		{
			cout << "Province " << P[w] << ", Day " << q+1 << ": " << y[q] << endl;
		}
	}
	

	getch ();
	return 0;	
}

