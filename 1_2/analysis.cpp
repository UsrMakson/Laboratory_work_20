#include "analysis.h"

#include <iostream>
#include <sstream>
#include <fstream>
#include <random>
#include <ctime>

using namespace std;

int Analysis::get_cin_n()
{
    string temp;
    while (true)
    {
        getline(cin, temp);
        istringstream iss(temp);
        int number;
        if (iss >> number && number >= 1 && number <= 2000000)
        {
            return number;
        }
        cout << "���������: ";
    }
}

vector<int> Analysis::get_cin() {
    vector<int> result;
    string temp;
    cout << ": ";
    while (true) {
        result.clear();
        while (cin >> temp) {
            cout << ": ";
            if (temp == "stop") break;
            int number;
            istringstream iss(temp);
            bool is_valid = (iss >> number) && iss.eof();
            bool in_range = (number >= -1000000) && (number <= 1000000);
            if (is_valid && in_range)
                result.push_back(number);
        }
        //### ������� ������ ###
        const bool req = (true);
        //######################
        if (req) //������ ������
        {
            return result;
        }
        else {
            cout << "\n�����������, �������� ������ ������������!\n� ������ ����������:\n: ";
        }
    }
}

vector<int> Analysis::get_file() {
    vector<int> result;
    fstream f;
    f.open("imput.md");
    string temp;
    while (true) {
        result.clear();
        while (f >> temp) {
            int number;
            istringstream iss(temp);
            bool is_valid = (iss >> number) && iss.eof();
            bool in_range = (number >= -1000000) && (number <= 1000000);
            if (is_valid && in_range)
                result.push_back(number);
        }
        //### ������� ������ ###
        const bool req = (true);
        //######################
        if (req) //������ ������
        {
            f.close();
            return result;
        }
        else {
            f.close();
            cout << "\n�����������, �������� ������ ������������!\n� ������ ���������� ����:\n: ";
        }
    }
}

vector<int> Analysis::get_rand() {
    srand(time(NULL));
    vector<int> result;
    int number;
    int it;
    it = rand() % 13 +10;
    for (int i = 0; i < it; i++) {
        number = rand() % 10000 - 1000;
        result.push_back(number);
    }
    //### ������� ������ ###
    const bool req = (true);
    //######################
        if (req) //������ ������
        {
            return result;
        }
        else {
            number = rand() % 10000 - 1000;
            result.push_back(number);
            return result;

        }
}
