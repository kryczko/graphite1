/* This program will print coordinates for graphite structure to be plot in vmd.
 */


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	double c1_x = 0.0, c1_y = 0.0;
	double c2_x = 0.0, c2_y = 1.42;
	double c3_x = 1.23, c3_y = -0.71;
	double c4_x = 1.23, c4_y = -2.13;

	ofstream outputfile;
	outputfile.open("data.xyz");

	outputfile << 36 << "\n\n";

	for (double i = 0.0; i <= 2.0; i ++)
	{
		c1_x += i*2.46;
		c2_x += i*2.46;
		c3_x += i*2.46;
		c4_x += i*2.46;
		
		for (double j = 0.0; j <= 2.0; j ++)
		{
			c1_y += j*2.84;
			c2_y += j*2.84;
			c3_y += j*2.84;
			c4_y += j*2.84; 
			
			
			outputfile << "C\t" << c1_x << "\t" <<  c1_y << "\t" << 0.0 << endl;
			outputfile << "C\t" << c2_x << "\t" << c2_y << "\t" << 0.0 << endl;
			outputfile << "C\t" << c3_x << "\t" << c3_y << "\t" << 0.0 << endl;
			outputfile << "C\t" << c4_x << "\t" << c4_y << "\t" << 0.0 << endl;
		}
	}
outputfile.close();
return 0;
}	 
