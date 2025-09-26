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
        if ((iss >> number) && (number == 1 || number == 2))
        {
            return number;
        }
        cout << "Повторите: ";
    }
}

void Analysis::add_out_of_file(vector<Name>& arr, Name& temp_FIO)
{
    ifstream f("input.md");
    string temp_SecondName, temp_FirstName, temp_Patronymic;
    string line;
    int count = 0;

    while (getline(f, line))
    {
        if (line.empty()) continue;

        istringstream iss(line);
        vector<string> words;
        string word;

        while (iss >> word)
        {
            words.push_back(word);
        }

        if (words.empty()) continue;

        string secondName = "", firstName = "", patronymic = "";

        switch (words.size())
        {
        case 1:
            firstName = words[0];
            break;

        case 2:
            secondName = words[0];
            firstName = words[1];
            break;

        default:
            secondName = words[0];
            firstName = words[1];
            patronymic = words[2];

            for (size_t i = 3; i < words.size(); ++i)
            {
                patronymic += " " + words[i];
            }
            break;
        }

        temp_FIO.clear();
        temp_FIO.Set_SecondName(secondName);
        temp_FIO.Set_FirstName(firstName);
        temp_FIO.Set_Patronymic(patronymic);
        arr.push_back(temp_FIO);
        count++;
    }

    f.close();
    cout << "Загружено " << count << " записей из файла." << endl;
}