#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    std::string strA, strB;
    std::ifstream infile("INPUT.TXT");
    std::ofstream outfile("OUTPUT.TXT");
    //std::cin >> strA >> strB;
    infile >> strA >> strB;

    int sizeA = strA.length();
    int sizeB = strB.length();

    char* arrA{ new char[sizeA] {} };
    char* arrB{ new char[sizeB] {} };

    for(int i=0; i<sizeA; i++){
        char v = 0;
            if (strA[i] == '1')
                v = 1;
            else
                v = 2;
        arrA[i] = v;
    }

    for (int i = 0; i < sizeB; i++) {
        char v = 0;
            if (strB[i] == '1')
                v = 1;
            else if (strB[i] == '2')
                v = 2;
          
        arrB[i] = v;
    }

    int size = 0;
    int sizeMin = sizeA + sizeB;

    for (int s = - sizeA; s <= sizeB; s++) {
        if (s < 0)
            size = max(sizeB - s, sizeA);
        else
            size = max(sizeA + s, sizeB);

        bool success = true;
        for (int iA = max(-s, 0), iB = max(s, 0); iA < sizeA && iB < sizeB; iA++, iB++) {
            if (arrA[iA] + arrB[iB] > 3) {
                success = false;
                break;
            }
        }
        if (success)
            sizeMin = min(sizeMin, size);
    }

    //cout << sizeMin;
    outfile << sizeMin;
}
