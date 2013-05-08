#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{


int rows, columns;
string outputfile;

cout << "\nWelcome to the Carbon Lattice Generator.\n\n";
cout << "How many rows of carbon atoms would you like: ";
cin >> rows;
cout << "How many columns of carbon atoms would you like: ";
cin >> columns; 
cout << "What is the name of the output file (e.g. data.xyz): ";
cin >> outputfile;

ofstream out;
out.open(outputfile.c_str());


out << 2*rows*columns  << "\n\n";

double c0_x = -2.0, c0_y = -2.0, c1_x, c1_y;

double x0_values[columns], y0_values[rows], x1_values[columns], y1_values[rows];

for (int i = 0; i < columns; i ++)
{	
	c0_x += 2.0;
	c1_x = c0_x + 1.0;
	x0_values[i] = c0_x;
	x1_values[i] = c1_x;

	c0_y = -2.0;
	for (int n = 0; n < rows; n ++)
	{
		c0_y += 2.0;
		c1_y = c0_y + 1.0;
		y0_values[n] = c0_y;
		y1_values[n] = c1_y;
		out << 	"C\t" << x0_values[i] << "\t" << y0_values[n] << "\t" << 0.0 << endl;
		out << "C\t" << x1_values[i] << "\t" << y1_values[n] << "\t" << 0.0 << endl;
	}
}

out.close();
return 0;
}







