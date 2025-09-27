#include "analysis.h"
#include "Employee.h"

#include <iostream>
#include <vector>
#include <locale>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <limits>

using namespace std;

void sub(int temp)
{
    switch (temp)
    {
    case -1: {cout << "_____чтобы закончить ввод, напишите stop_____\n"; break; }
    case 0: {cout << "\nвведите Фамилию: "; break; }
    case 1: {cout << "\nвведите Отдел: "; break; }
    default:
        break;
    }
}

int main() {
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector <Employee> arr;
    Employee temp_Eployee("", 0);
    bool b = true;
    int n;
    char m;
    cout << "выберите способ ввода (1 - консоль / 2 - файл)\n:";
    n = Analysis::get_cin_n();
    system("cls");
    sub(-1);
    while (b)
    {
        temp_Eployee.clear();
        string temp_Name = "";
        int temp_Office = 0;
        switch (n)
        {
        case 1:
        {
            sub(0);
            getline(cin, temp_Name);
            sub(1);
            getline(cin, temp_Office);
            if (temp_Name.empty() && temp_Office.empty())
            {
                break;
            }
            temp_Employee.Set_Name(temp_Name);

            arr.push_back(temp_Employee);

            cout << "Продолжить? (y - Yes(да) / n - No(нет))\n:";
            cin >> m;
            cin.ignore();
            switch (m)
            {
            case 'y': {break; }
            case 'n': { b = false; break; }
            default: break;
            }
            break;
        }
        case 2:
        {
            Analysis::add_out_of_file(arr, temp_Employee);
            b = false;
            break;
        }
        default:
            break;
        }
    }
    system("cls");
    for (Employee i : arr)
    {
        i.print();
    }
    system("pause");
    return 0;
}