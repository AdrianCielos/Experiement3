#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "*** ARRAY ***" << endl;
	cout << endl << endl;
	
	//INPUT INTEGER
	int x, r[15], small, large;
	cout << "Please Input Any Desired Number of Choice:\n";
	
	//INTEGER/S INPUT
	for (x = 0; x < 15; x++)
	{
		cin >> r[x];
		
	}
	cout << endl << endl;
	
	cout << "COMPUTING..." << endl;
	cout << endl << endl;
	
	//FINDING SMALLEST INTEGER FORMULA
	int a, b;
	small = r[0];
	for (a=1; a < 15; a++)
	{
		b = r[a];
		
		if (b < small)
		{
			small = b;
		}
	}
	cout << "The SMALLEST integer is: " << small << endl;
	
	//FINDING LARGEST INTEGER FORMULA
	int c, d;
	large = r[0];
	for (c = 1; c < 15; c++)
	{
		d = r[c];
		
		if (d > large)
		{
			large = d;
		}
	}
	cout << "The LARGEST integer is: " << large << endl;
	
	//FINDING TOTAL FORMULA
	int sum=0, y;
	for (y=0; y < 15; y++)
	{
		sum += r[y];
	}
	cout << "The TOTAL of all integers is: " << sum << endl;
	
	//FINDING AVERAGE FORMULA
	float ave;
	cout << setprecision(2) << fixed;
	ave=sum/15;
	cout << "The AVERAGE of all integers is: " << ave << endl;
 	
	getch ();
	return 0;
}
