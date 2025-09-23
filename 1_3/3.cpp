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
    case 0: {cout << "\nвведите Фамилию: "; break; }
    case 1: {cout << "\nвведите Имя: "; break; }
    case 2: {cout << "\nвведите Отчество: "; break; }
    default:
        break;
    }
}

void add_out_of_file(vector<Name>& arr, Name& temp_FIO)
{
    fstream f;
    string temp_SecondName, temp_FirstName, temp_Patronymic;
    f.open("imput.md");
    while (true) 
    {
        f >> temp_SecondName;
        f >> temp_FirstName;
        f >> temp_Patronymic;
        temp_FIO.clear();
        temp_FIO.Set_SecondName(temp_SecondName);
        temp_FIO.Set_SecondName(temp_FirstName);
        temp_FIO.Set_SecondName(temp_Patronymic);
        if (temp_FIO.is_Empty())
        {
            break;
        }
        else {
            arr.push_back(temp_FIO);
        }
    }


}
int main() {
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector <Name> arr;
    Name temp_FIO("", "", "");
    bool b = true;
    int n;
    char m;
    cout << "выберите способ ввода (1 - консоль / 2 - файл)\n:";
    n = Analysis::get_cin_n();
    system("cls");
    sub(-1);
    while (b == true)
    {
        temp_FIO.clear();
        string temp_SecondName = "", temp_FirstName = "", temp_Patronymic = "";
        switch (n)
        {
        case 1:
        {
            sub(0); cin >> temp_SecondName;
            sub(1); cin >> temp_FirstName;
            sub(2); cin >> temp_Patronymic;
            temp_FIO.Set_SecondName(temp_SecondName);
            temp_FIO.Set_FirstName(temp_FirstName);
            temp_FIO.Set_Patronymic(temp_Patronymic);
            arr.push_back(temp_FIO);
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
        case 2: {add_out_of_file(arr, temp_FIO); b = false; break; }
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