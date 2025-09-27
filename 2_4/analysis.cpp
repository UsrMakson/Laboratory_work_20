<<<<<<< HEAD
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


int Analysis::get_file_height() {
    int result;
    fstream f;
    f.open("imput.md");
    string temp;
    while (true) {
        f >> temp;
        result = 0;
        while (f >> temp) {
            int number;
            istringstream iss(temp);
            bool is_valid = (iss >> number) && iss.eof();
            bool in_range = (number >= -1000000) && (number <= 1000000);
            if (is_valid && in_range)
                result = number;
        }
        //### условия задачи ###
        const bool req = (true);
        //######################
        if (req) //уловия задачи
        {
            f.close();
            return result;
        }
        else {
            f.close();
            cout << "\nНепривильно, смотрите уловие внимательнее!\nА теперь перепишите файл:\n: ";
        }
    }
}
=======
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


int Analysis::get_file_height() {
    int result;
    fstream f;
    f.open("imput.md");
    string temp;
    while (true) {
        f >> temp;
        result = 0;
        while (f >> temp) {
            int number;
            istringstream iss(temp);
            bool is_valid = (iss >> number) && iss.eof();
            bool in_range = (number >= -1000000) && (number <= 1000000);
            if (is_valid && in_range)
                result = number;
        }
        //### условия задачи ###
        const bool req = (true);
        //######################
        if (req) //уловия задачи
        {
            f.close();
            return result;
        }
        else {
            f.close();
            cout << "\nНепривильно, смотрите уловие внимательнее!\nА теперь перепишите файл:\n: ";
        }
    }
}
>>>>>>> 7daa9e4afda4d958361cd9196d3aa983099d1102
