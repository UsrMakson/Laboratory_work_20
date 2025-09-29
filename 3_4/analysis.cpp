#include "analysis.h"

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int Analysis::get_cin_n()
{
    string temp;
    while (true)
    {
        getline(cin, temp);
        istringstream iss(temp);
        int number;
        if (iss >> number && number == 1 || number == 2)
        {
            return number;
        }
        cout << "Повторите: ";
    }
}
