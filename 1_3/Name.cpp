#include "Name.h"

using namespace std;

Name::Name(const std::string& second_name, const std::string& first_name, const std::string& patonymic):
    Second_name(second_name),
    First_name(first_name), 
    Patronymic(patonymic)
{
}

void Name::print() const
{
    string result = "";
    bool needSpace = false;

    if (!Second_name.empty())
    {
        result += Second_name;
        needSpace = true;
    }

    if (!First_name.empty())
    {
        if (needSpace) result += " ";
        result += First_name;
        needSpace = true;
    }

    if (!Patronymic.empty())
    {
        if (needSpace) result += " ";
        result += Patronymic;
    }

    cout << result << endl;
}

void Name::clear() 
{
    Name::Second_name = "";
    Name::First_name = "";
    Name::Patronymic = "";
}
std::string Name::Get_SecondName() const
{ 
    return Second_name;
}
std::string Name::Get_FirstName() const
{ 
    return First_name; 
}
std::string Name::Get_Patronymic() const
{ 
    return Patronymic;
}
void Name::Set_SecondName(const std::string Second_Name)
{
    Second_name = Second_Name;
}
void Name::Set_FirstName(const std::string First_Name)
{ 
    First_name = First_Name;
}
void Name::Set_Patronymic(const std::string patronymic)
{
    Patronymic = patronymic;
}
bool Name::is_Empty() const
{
    return Second_name.empty() && First_name.empty() && Patronymic.empty();
}