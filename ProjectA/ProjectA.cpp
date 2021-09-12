#include <iostream>
#include <fstream>

using namespace std;
int main()
{
  long long int sum;
  int a, b;
  std::ifstream infile("INPUT.TXT");
  std::ofstream outfile("OUTPUT.TXT");
  infile >> a >> b;
  sum = a + b;
  outfile << sum;
}
