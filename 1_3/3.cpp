#include "analysis.h"
#include "Name.h"

#include <iostream>
#include <vector>
#include <locale>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <windows.h>

using namespace std;

void sub(int temp)
{
    switch (temp)
    {
    case -1: {cout << "_____чтобы закончить ввод, напишите stop_____"; break; }
    case 0: {cout << "\nвведите имя: "; break; }
    case 1: {cout << "\nвведите рост: "; break; }
    default:
        break;
    }
}

void add_out_of_file(vector<Name>& arr)
{
    fstream f;
    string temp_Name;
    int temp_height;
    f.open("imput.md");
    while (f >> temp_Name)
    {
        f >> temp_height;
        //arr.emplace_back(temp_Name, temp_height);
    }


}
int main() {
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector <Name> arr;
    bool b = true;
    int n;
    char m;
    cout << "выберите способ ввода (1 - консоль / 2 - файл)\n:";
    n = Analysis::get_cin_n();
    system("cls");
    sub(-1);
    while (b == true)
    {
        string temp_Name = "";
        int temp_height = 0;
        switch (n)
        {
        case 1:
        {
            sub(0); cin >> temp_Name;
            sub(1); cin >> temp_height;
            //arr.emplace_back(temp_Name, temp_height);
            cout << "Продолжить? (y - Yes(да) / n - No(нет))\n:";
            cin >> m;
            switch (m)
            {
            case 'y': {break; }
            case 'n': { b = false; break; }
            default: break;
            }
            break;
        }
        case 2: {add_out_of_file(arr); b = false; break; }
        default:
            break;
        }
    }
    system("cls");
    for (Name i : arr)
    {
        i.print();
    }
    system("pause");
    return 0;
}