#include <iostream>
#include <fstream>

using namespace std;

int main()
{

ofstream out;
out.open("example_data.xyz");

out << 41  << "\n\n";

double c0_x = -2.0, c0_y = -2.0, c1_x = -1.0, c1_y = -1.0;

double x0_values[5], y0_values[5], x1_values[4], y1_values[4];

for (int i = 0; i < 5; i ++)
{	
	c0_x += 2.0;
	
	x0_values[i] = c0_x;
	
	c0_y = -2.0;
	for (int n = 0; n < 5; n ++)
	{
		c0_y += 2.0;
		y0_values[n] = c0_y;
		out << 	"C\t" << x0_values[i] << "\t" << y0_values[n] << "\t" << 0.0 << endl;
	}
}
for (int j = 0; j < 4; j ++)
{
        c1_x += 2.0;

        x1_values[j] = c1_x;

        c1_y = -1.0;
        for (int k = 0; k < 4; k ++)
        {
                c1_y += 2.0;
                y1_values[k] = c1_y;
                out <<  "C\t" << x1_values[j] << "\t" << y1_values[k] << "\t" << 0.0 << endl;
        }
}


out.close();
return 0;
}







