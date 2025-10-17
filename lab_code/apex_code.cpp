//
//
#include <iostream>
#include "apex_code.h"

using namespace std;

void quiz(stringstream& cin, stringstream& cout)
{
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int rep = 0; rep < 3; ++rep) {
            for (int k = 1; k <= 9; ++k) {
                cout << (i * k);
                if (k < 9) cout << ",";       // commas between numbers with no space
            }
            if (rep < 2) cout << " ";         // single space between the 3 distinctions
        }
        cout << endl;
    }
    return 0;
}
