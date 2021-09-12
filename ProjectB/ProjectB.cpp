#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	int y;
	std::ifstream infile("INPUT.TXT");
	std::ofstream outfile("OUTPUT.TXT");
	infile >> y;
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		outfile << "13/09/" << y;
	else
		outfile << "12/09/" << y;
}
