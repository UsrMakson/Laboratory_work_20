#include "analysis.h"

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

void add_out_of_file(vector<Name>& arr, Name& temp_FIO)
{
    ifstream f("input.md");
    string temp_SecondName, temp_FirstName, temp_Patronymic;
    while (f >> temp_SecondName >> temp_FirstName >> temp_Patronymic)
    {
        temp_FIO.clear();
        temp_FIO.Set_SecondName(temp_SecondName);
        temp_FIO.Set_FirstName(temp_FirstName);
        temp_FIO.Set_Patronymic(temp_Patronymic);
        arr.push_back(temp_FIO);
    }

    f.close();
}