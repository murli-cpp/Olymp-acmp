#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	unsigned int a, b, y, x, nok, i;
	std::ifstream infile("INPUT.TXT");
	std::ofstream outfile("OUTPUT.TXT");

	infile >> x >> y;
	a = min(x, y);
	b = max(x, y);
	for (i = 1; i <= b; i++) {
		nok = a * i;
		if (nok % b == 0) {
			outfile << nok;
			break;
		}
	}
}
