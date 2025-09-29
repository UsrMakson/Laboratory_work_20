#include "analysis.h"
#include "Employee.h"
#include "Office.h"

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
    case 2: {cout << "\nсделайте сотрудника начальником отдела "; break; }
    default:
        break;
    }
}

int main() {
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector <Employee> arr;
    vector <Office> arr2;
    Office temp_Office("", "");
    Employee temp_Employee("", temp_Office);
    bool b = true;
    char m;
    system("cls");
    sub(-1);
    while (b)
    {
        temp_Employee.clear();
        string temp_Name = "";
        string temp_Office_Name = "";
        sub(0);
        getline(cin, temp_Name);
        sub(1);
        getline(cin, temp_Office_Name);
        if (temp_Name.empty() && temp_Office_Name.empty())
        {
            break;
        }
        temp_Employee.Set_Name(temp_Name);
        temp_Employee.Set_Office(temp_Office_Name);
        arr2.push_back(temp_Employee.Get_Office());

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
    system("cls");
    b = true;
    for (Office i : arr2)
    {
        sub(2);
        string temp_Boss = "";
        cout << i.Get_Office_Name() << ": ";
        getline(cin, temp_Boss);
        for (Employee j : arr)
        {
            if (j.Get_Office_Name() == i.Get_Office_Name())
            {
                j.Set_Boss_Name(temp_Boss);
            }
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